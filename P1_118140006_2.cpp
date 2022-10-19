// NIM: 118140006
// Nama : Fitra Salam S. Nagalay
// Tanggal : 05/11/2020
// Deskripsi : N^2

#include<iostream>
#include<cmath>
using namespace std;

void angka(int a, int b, int c){
    if(a==1){
        cout<<a;
        c+=a;
        angka(a+2, b, c);
    }else if(c<b){
        cout<<"+"<<a;
        c+=a;
        angka (a+2, b, c);
    }else{
        cout<<" = "<<sqrt(b)<<"^2";
    }
}

int main(){
    int a=1, n, c=0;
    cin>>n;
    
    angka(a,n,c);
}
