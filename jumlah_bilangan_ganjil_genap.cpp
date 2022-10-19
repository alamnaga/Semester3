#include <iostream>
using namespace std;

int main(){

int angka;
int jumlahgenap=0,jumlahganjil=0;

for(int i=0;i<5;i++){
cout<<" masukkan angka = ";
cin>>angka;
if(angka%2==0){
    jumlahgenap=jumlahgenap+angka;
 }
  else{
    jumlahganjil=jumlahganjil+angka;
 }
}

cout<<" Jumlah angka genap : "<<jumlahgenap<<endl;
cout<<" Jumlah angka ganjil : "<<jumlahganjil<<endl;

return 0;

}
