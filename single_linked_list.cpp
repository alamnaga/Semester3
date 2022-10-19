#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int pil;
void pilih();

void buat_baru();
void tambah_belakang();
void tambah_depan();
void hapus_belakang();
void hapus_depan();
void tampil();

struct node {
	char nim[10],nama[20],prodi[20];
	node *prev, *next;
};
node *baru,*head=NULL,*tail=NULL,*hapus,*bantu;

int main(){
	do{
		system("cls");
		cout << "====================================="<<endl;
		cout << " 	INPUT DATA MAHASISWA		  "<<endl;
		cout << "1. Tambah Depan"<<endl;
		cout << "2. Tambah Belakang"<<endl;
		cout << "3. Hapus Depan"<<endl;
		cout << "4. Hapus Belakang"<<endl;
		cout << "5. Tampilkan"<<endl;
		cout << "6. Selesai"<<endl;
		cout << "====================================="<<endl;
		cout << "Masukan pilihan anda : ";
		cin >> pil;
        pilih();
	}while(pil!=6);
}
void pilih(){
	if (pil==1)
		tambah_depan();
	else if(pil==2)
		tambah_belakang();
	else if(pil==3)
		hapus_depan();
	else if(pil==4)
		hapus_belakang();
	else if(pil==5)
		tampil();
	else
		cout << "selesai";
}
void buat_baru(){
	baru  =new(node);
	cout << "Input Nama  : ";
	cin >> baru->nama;
	cout << "Input NIM   : ";
	cin >> baru->nim;
	cout << "Input Prodi : ";
	cin >>baru->prodi;
	baru->prev=NULL;
	baru->next=NULL;

}
void tambah_belakang(){
	buat_baru();
	if(head==NULL){
		head=baru;
		tail=baru;
	}else {
		tail->next=baru;
	}
	tail->next=baru;
	baru->prev=tail;
	tail=baru;
	cout << endl << endl;
	tampil();
}
void tambah_depan(){
	buat_baru();
	if (head==NULL){
		head=baru;
		tail=baru;
		}else {
		baru->next=head;
		head->prev=baru;
		head=baru;
	}
	cout << endl <<endl;
	tampil();
}
void hapus_depan(){
	if (head==NULL){
		cout << "kosong" ;
	}else if(head->next=NULL) {
		hapus=head;
		head=NULL;
		head=hapus->next;
		head->prev=NULL;
		delete hapus;

	}
	cout << endl << endl;
	tampil();

}
void hapus_belakang(){
	if (head==NULL)
		cout << "kosong" ;
	else if(head->next==NULL){
		hapus=head;
		head=NULL;
		tail=NULL;
		delete hapus;
	}else {
		hapus=tail;
		tail=hapus->prev;
        tail=hapus;
        tail->next=NULL;
        delete hapus;
		}
	cout << endl << endl;
	tampil();

}
void tampil(){
	if (head==NULL)
		cout << "kosong";
	else {
		bantu=head;
		cout <<" No \t|Nama \t|NIM \t|Prodi \t|"<<endl;
		int no=0;
		while (bantu!=NULL){
            no++;
            cout <<" "<<no<<"\t | ";
			cout <<" "<< bantu->nama <<"\t |";
			cout <<" "<< bantu->nim  <<"\t |";
			cout <<" "<< bantu->prodi<<"\t |"<<endl;
			bantu=bantu->next;
		}
	}
	system("pause");
}



