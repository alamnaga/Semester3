#include <iostream>
#include <stdlib.h>
#include <string>
#include <windows.h>
using namespace std;
typedef struct stok{
    string kode;
    string nama;
    int jumlah;
    int harga;
    stok *next;
};

stok *stok_obat;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void input_obat(string kd,string nama,int jml,int hrg);

void gotoXY(int kolom, int baris)
{
    CursorPosition.X = kolom; // Locates column
    CursorPosition.Y = baris; // Locates Row
    SetConsoleCursorPosition(console,CursorPosition);
}
int isEmpty(){
    if (stok_obat == NULL)
        return 1;
    else
        return 0;
}
void hapus_obat(string kode){

    stok *bantu,*prev;
    int berhasil=0;
    bantu = stok_obat;

    if (isEmpty()==1){
        cout<<"Data Obat Kosong"<<endl;
    }else{
        while(bantu != NULL && bantu->kode != kode){
            prev = bantu;
            bantu = bantu->next;
            berhasil=1;
        }

        if (bantu != NULL && bantu->kode == kode){
            //hapus tengah
            if(bantu->next != NULL && bantu != stok_obat)
                prev->next = bantu->next;
                //jika hapus di depan dan tinggal 1 simpul
            else if (bantu == stok_obat && stok_obat->next == NULL){
                stok_obat = NULL;}
                //jika hapus di depan tapi masih ada simpul berikutnya
            else if (bantu == stok_obat && stok_obat->next != NULL){
                stok_obat = stok_obat->next;}
                //jika hapus di belakang
            else if (bantu->next == NULL){
                prev->next = NULL;
            }
            free(bantu); //hapus dr memori
            berhasil=1;
        }
        if (berhasil==1){
            cout<<"Berhasil dihapus"<<endl;
        }else{
            cout<<"gagal dihapus"<<endl;
        }
    }
}
void input_obat(string kd,string nama,int jml,int hrg){
    stok *baru,*bantu;
    baru = new stok;
    baru->kode=kd;
    baru->nama=nama;
    baru->jumlah=jml;
    baru->harga=hrg;
    baru->next = NULL;
    if (isEmpty()==1){
        stok_obat  = baru;
        stok_obat->next = NULL;
    }else{
        bantu = stok_obat;
        while(bantu->next != NULL){
            bantu = bantu->next;
        }
        bantu->next=baru;
    }
}
void tampil(){
    stok *bantu;

    bantu = new stok;
    bantu = stok_obat;

    gotoXY(0,11);
    cout<<"|";
    gotoXY(2,11);
    cout<<"No";

    gotoXY(5,11);
    cout<<"|";
    gotoXY(7,11);
    cout<<"Kode";

    gotoXY(12,11);
    cout<<"|";

    gotoXY(14,11);
    cout<<"Nama Obat"; // kolom 29

    gotoXY(30,11);
    cout<<"|";

    gotoXY(32,11);
    cout<<"Jumlah"; //kolom 38

    gotoXY(38,11);
    cout<<"|";

    gotoXY(40,11);
    cout<<"Harga"; //kolom 52

    gotoXY(48,11);
    cout<<"|";

    int baris_start = 12;
    while(bantu != NULL){
        gotoXY(0,baris_start);
        cout<<"|";
        gotoXY(2,baris_start);
        cout<<baris_start-11;

        gotoXY(5,baris_start);
        cout<<"|";
        gotoXY(7,baris_start);
        cout<<bantu->kode;

        gotoXY(12,baris_start);
        cout<<"|";

        gotoXY(14,baris_start);
        cout<<bantu->nama; // kolom 29

        gotoXY(30,baris_start);
        cout<<"|";

        gotoXY(32,baris_start);
        cout<<bantu->jumlah; //kolom 38

        gotoXY(38,baris_start);
        cout<<"|";

        gotoXY(40,baris_start);
        cout<<bantu->harga; //kolom 52

        gotoXY(48,baris_start);
        cout<<"|";

        bantu = bantu->next;

        baris_start++;

    }
    gotoXY(0,baris_start);
    cout<<"|";
    for(int o=1;o<=47;o++){
        gotoXY(o,baris_start);
        cout<<"_";
    }
    gotoXY(48,baris_start);
    cout<<"|";

}
void tambah_obat(string kd,int jml){
    stok *bantu;
    bantu = stok_obat;
    int berhasil=0;
    if (isEmpty()==1){
        cout<<"Data Obat Kosong"<<endl;
    }else{
        while(bantu != NULL){
            if (bantu->kode == kd){
                bantu->jumlah = bantu->jumlah + jml;
                berhasil=1;
            }
            bantu = bantu->next;
        }
        cout<<endl;
        if (berhasil==1){
            cout<<"Obat Berhasil ditambahkan"<<endl;
        }else{
            cout<<"Obat Gagal ditambahkan"<<endl;
        }
    }
}
void kurangi_obat(string kd,int jml){
       stok *bantu;
    bantu = stok_obat;
    int berhasil=0;
    if (isEmpty()==1){
        cout<<"Data Obat Kosong"<<endl;
    }else{
        while(bantu != NULL){
            if (bantu->kode == kd){
                while (jml > bantu->jumlah ){
                    cout<<endl<<"Jumlah Maksimal : "<<bantu->jumlah<<endl;
                    cout<<"Masukan Jumlah : ";
                    cin>>jml;
                }
                bantu->jumlah = bantu->jumlah - jml;

                berhasil=1;
            }
            bantu = bantu->next;
        }
        cout<<endl;
        if (berhasil==1){
            cout<<"Obat Berhasil dikurangi"<<endl;
        }else{
            cout<<"Obat Gagal dikurangi"<<endl;
        }
    }
}

void login();
void program(){

    int pil;
    do{
        system("CLS");
        cout<<"===========================================================\n";
        cout<<" \tAPOTIK MANTAP\n";
        cout<<"===========================================================\n";
        cout<<"1. Input Obat\n";
        cout<<"2. List Obat\n";
        cout<<"3. Hapus Obat\n";
        cout<<"4. Tambahkan Jml Obat\n";
        cout<<"5. Kurangi Jml Obat\n";
        cout<<"6. Logout\n";
        cout<<"7. Exit\n";
        cout<<"===========================================================\n";
        cout<<"Pilih (1-7) : ";
        cin>>pil;
        switch(pil){
            case 1:{
                string nm,kd;
                int jml,hrg;
                bagian_kode:
                cout<<"Masukan Data Obat \n";
                cout<<"Kode  Obat  : ";cin>>kd;

                stok *bantu;
                bantu = stok_obat;
                int ada=0;
                while(bantu != NULL){
                    if (bantu->kode == kd){
                        ada=1;
                    }
                    bantu = bantu->next;
                }
                if (ada==1){
                    cout<<"Kode Obat Sudah Ada"<<endl<<"Masukan Ulang"<<endl;
                    cout<<endl;
                    goto bagian_kode;
                }

                cout<<"Nama  Obat  : ";cin>>nm;
                cout<<"Jml   Obat  : ";cin>>jml;
                cout<<"Harga Obat  : ";cin>>hrg;

                input_obat(kd,nm,jml,hrg);
                cout<<"\nTersimpan";
            }
            break;
            case 2:
                tampil();
                break;
            case 3:
                {
                    string kd;
                    char yn;
                    bagian_hapus:
                        cout<<"Masukan Kode Obat : ";cin>>kd;
                        stok *bantu;
                        bantu = stok_obat;
                        int ada=0;
                        while(bantu != NULL){
                            if (bantu->kode == kd){
                                ada=1;
                            }
                            bantu = bantu->next;
                        }
                        if (ada==0){
                            cout<<"Kode Obat Tidak Ada"<<endl<<"Masukan Ulang"<<endl;
                            cout<<endl;
                            goto bagian_hapus;
                        }

                    cout<<"Hapus Data Obat? (y/n) : ";cin>>yn;
                    if (yn == 'y'){
                        hapus_obat(kd);
                    }
                }
                break;
            case 4:{
                string kd;
                int jml;
                cout<<"Masukan Kode Obat   : ";cin>>kd;
                cout<<"Masukan Jumlah Obat : ";cin>>jml;
                tambah_obat(kd,jml);
            }
            break;
            case 5:{
                string kd;
                int jml;
                cout<<"Masukan Kode Obat   : ";cin>>kd;
                cout<<"Masukan Jumlah Obat : ";cin>>jml;
                kurangi_obat(kd,jml);
            }
            break;
            case 6 :
                char pil;
                cout<<endl<<"Logout (y/n) ? : ";
                cin>>pil;
                if (pil=='y'){
                    login();
                }
                break;

        }

        cout<<endl<<endl;
        system("PAUSE");
    }while(pil != 6);
}
void login(){
    system("CLS");
    string username="erdy";
    string password="Renka0801";
    cout<<"===========================================================\n";
    cout<<" \tAPOTIK MANTAP\n";
    cout<<"===========================================================\n";
    cout<<" \tLOGIN\n";
    string u,p;
    cout<<"Username : ";cin>>u;
    cout<<"Password : ";cin>>p;
    if (u==username and p==password){

        cout<<endl<<endl<<"Sukses"<<endl;

        program();
    }else{
        cout<<"Username/Password Salah"<<endl;
        system("PAUSE");
        login();
    }
}
int main()
{
    stok_obat = NULL;
    login();
    return 0;

}
