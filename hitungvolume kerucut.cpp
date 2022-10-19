#include <iostream>
using namespace std;

int main () {

string n; //Deklarasi sebuah string untuk memasukkan angka
int A[3]={1,-1,0}; //Deklarasi sebuah Array untuk menampung semua kemungkinan yg ada
int B[3]={0,1,-1}; //Deklarasi sebuah Array untuk menampung semua kemungkinan yg ada
bool C[3];
int d=0; //Deklarasi d untuk menyimpan sebuah agnka

cin>>n; //Input nilai

for (int i=0; i<n.length(); i++){ //Memberi batasan perulangan
    C[d]=0;
    if(n[i]=='1'){ //jika pada kondisi n sama dengan 1 maka di hitung sebagai berikut
        d+=A[d]; //proses penghitungan
    } else { //jika tidak memenuhi kondisi di atas maka jalankan program di bawah ini
        d+=B[d]; //proses penghitungan
    }
    C[d]=1;
}
if (C[0]){ //jika C[0] maka program berhenti di final state
    cout<<" Program Diterima ";
} else { //posisi ini dimana program atau inputan yang dimasukkan tidak berhenti di final state
    cout<<" Program Ditolak ";
}
}
