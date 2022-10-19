#include <iostream>

using namespace std;

main(){
char nilai_huruf;

struct mahasiswa{
char nim[10];
char nama[30];
char kelas[20];
char jurusan[20];
}mhs;

struct nilai{
float nilai_tgs;
float nilai_kuis;
float nilai_mid;
float nilai_uas;
float nilai_akhir;
}nl;


cout <<" ----------------------------" << endl;
cout << "Input NIM = ";cin >> mhs.nim;

cout << "Input Nama = ";cin>>mhs.nama;
cout << "Input Kelas = ";cin>>mhs.kelas;
cout << "Input Jurusan = ";cin >> mhs.jurusan;
cout << endl;
cout<<"Masukkan Nilai Tugas = ";cin>>nl.nilai_tgs;
cout<<"Masukkan Nilai Kuis = ";cin>>nl.nilai_kuis;
cout<<"Masukkan Nilai Mid = ";cin>>nl.nilai_mid;
cout<<"Masukkan Nilai UAS = ";cin>>nl.nilai_uas;
cout<<endl;

nl.nilai_akhir=(nl.nilai_tgs*20/100)+(nl.nilai_kuis*20/100)+(nl.nilai_mid*30/100)+(nl.nilai_uas*30/100); //di ringkas untuk menghemat variable

if (nl.nilai_akhir>80){
nilai_huruf='A';
}
else if(nl.nilai_akhir<=80 && nl.nilai_akhir>60){
nilai_huruf='B';
}
else if(nl.nilai_akhir<=60 && nl.nilai_akhir>40){
nilai_huruf='C';
}
else if(nl.nilai_akhir<=40 && nl.nilai_akhir>=20){
nilai_huruf='D';
}
else{
nilai_huruf='E';
}


cout << "-DATA NILAI STRUKTUR DATA-" << endl;
cout <<" ----------------------------" << endl << endl;



cout << "Nilai Akhir Anda = " <<nl.nilai_akhir<< endl;
cout << "Nilai Huruf Anda = "<<nilai_huruf<<endl;
cout << endl;

}

