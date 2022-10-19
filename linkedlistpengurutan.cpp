#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>


struct angka{
       struct angka *kiri;
       char data;
       struct angka *kanan;
};

int tambahdata(struct angka* *bt,int nilai){
        if(*bt==NULL){
          *bt=(struct angka*) malloc (sizeof(struct angka));
          if(*bt==NULL) return 0;

          (*bt)->kanan=NULL;
          (*bt)->data=nilai;
          (*bt)->kiri=NULL;
          return 1;
        }
        else {
          if (nilai<((*bt)->data)){
             return tambahdata(&((*bt)->kiri),nilai);
          }
          else {
             return tambahdata(&((*bt)->kanan),nilai);
          }
        }
}

void cetakdata(struct angka *bt)
{
        if(bt->kiri!=NULL){
          cetakdata(bt->kiri);
        }
        if((bt->data!=NULL)){
          printf("%c ",bt->data);
        }
        if(bt->kanan!=NULL){
          cetakdata(bt->kanan);
        }

}

int main(void){
        struct angka *ptr;
        char karakter;
        char berhasil;

        ptr=NULL;
        printf("Solusi Pengurutan Angka\n");
        printf("-----------------------\n");
        printf("Masukkan Kumpulan Angka :\n");

        do{
          karakter=getchar();
          berhasil=tambahdata(&ptr,karakter);
          if (!berhasil){
            printf("Data gagal dimasukkan:\n");
            getch();
            return 0;
          }
        } while (karakter!= '\n');

        printf("\nData setelah diurutkan: \n");

        cetakdata(ptr);

        getch();
        return 0;
}
