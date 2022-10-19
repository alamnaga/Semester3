#include <iostream>
using namespace std;

int main() {

    float x,y;
    int kode;

    menu :
    cout<<" Pilihan Menu : "<<endl;
    cout<<" 1.Penjumlahan [+] "<<endl;
    cout<<" 2.Pengurangan [-] "<<endl;
    cout<<" 3.Perkalian [*] "<<endl;
    cout<<" 4.Pembagian [/] "<<endl;
    cout<<"Silahkan masukkan kode menu : ";
    cin>>kode;
    if (kode >= 4 && kode <= 1){
        cout << "Kode yang anda masukkan tidak ada Silahkan masukkan ulang kode .";
    }
    else {
        cout<<" Masukkan angka pertama : ";
        cin>>x;
        cout<<" Masukkan angka kedua   : ";
        cin>>y;
        if (kode == 1){
            cout<<" Hasil penjumlahan dari "<<x<<" + "<<y<<" adalah : "<<x+y<<endl;
        }
        else if (kode == 2){
            cout<<" Hasil pengurangan dari "<<x<<" - "<<y<<" adalah : "<<x-y<<endl;
        }
        else if (kode == 3){
            cout<<" Hasil perkalian dari "<<x<<" x "<<y<<" adalah : "<<x*y<<endl;
        }
        else if (kode == 4){
            cout<<" Hasil pembagian dari "<<x<<" : "<<y<<" adalah : "<<x/y<<endl;
        }
    }
    return 0;
}
