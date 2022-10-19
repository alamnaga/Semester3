#include <iostream>
using namespace std;

   int main() {

       int angka, jumlah, max, min;

       cout<<" masukkan jumlah angka : ";
       cin>>jumlah;
       cout<<endl;

       for (int i = 1; i <= jumlah; i++) {

       cout<<" Masukkan Angka : ";
       cin>>angka;

       if ( i == 1 ) {
             min = angka;
             max = angka;
            }
            else if ( min > angka ) {
               min = angka;
            }
            else if ( max < angka) {
               max = angka;
           }
           else { }
           }

       cout<<endl;
       cout<<" Nilai maksimal : "<<max<<endl;
       cout<<" Nilai minimal : "<<min<<endl;

       return 0;
       }
