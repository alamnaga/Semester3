#include <iostream>
using namespace std;

int main(){
    int c,f,k,r;
    //1) merubah dari celcius
    r,f,k;
    f=9*c/5+32;
    r=4*c/5;
    k=c+273;
    //2) merubah dari reamur
    c,k,f;
    c=5*r/4;
    k=r*4/5+273;
    f=r*9/4+32;
    //3) merubah dari fahrenheit
    c,r,k;
    c=(f-32)/1.8;
    k=(f+460)/1.4;
    r=(4-32)/2.25;
    //4) merubah dari kelvin
    c,r,f;
    c=k-273;
    r=k*1.8-460;
    f=(k-273)*0.8;

    int pilih;

    cout<<"#######Selamat Datang Di C++########\n";
    cout<<"1. Konversi Suhu Celcius"<<endl;
    cout<<"2. Konversi Suhu Reamur"<<endl;
    cout<<"3. Konversi Suhu Fahrenheit"<<endl;
    cout<<"4. Konversi Suhu Kelvin"<<endl;
    cout<<"Masukan Pilihan kamu : ";
    cin>>pilih;

    switch(pilih) {
                  case 1:
                       cout<<"Masukan Nilai Celcius = ";cin>>c;
                       cout<<f<<" Fahrenheit\n";
                       cout<<r<<" Reamur\n";
                       cout<<k<<" Kelvin\n";
                       break;
                  case 2: cout<<"Masukan Nilai Reamur = ";cin>>r;
                       cout<<c<<" Celcius\n";
                       cout<<f<<" Fahrenheit\n";
                       cout<<k<<" Kelvin\n";
                       break;
                  case 3:
                       cout<<"Masukan Nilai Fahrenheit = ";cin>>f;
                       cout<<c<<" Celcius\n";
                       cout<<k<<" Kelvin\n";
                       cout<<r<<" Reamur\n";
                       break;
                  case 4:
                       cout<<" Masukan Nilai Kelvin = ";cin>>k;
                       cout<<c<<" Celcius\n";
                       cout<<f<<" Fahrenheit\n";
                       cout<<r<<" Reamur\n";
                       break;
                  default:
                          cout<<" Pilihan anda kurang tepat ";
                          break;
                          }


    return 0;
}
