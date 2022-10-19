#include <iostream>
using namespace std;

int main () {
int n, x, positif, negatif, nol;

cout<<" masukkan batas angka yang akan dimasukkan : ";
cin>>x;
cout<<endl;
for (int i=0; i<x; i++){
    cout<<" masukkan angka : ";
    cin>>n;

    if (n>0){
        cout<<" bilangan positif "<<endl;
        positif=n;
        i++;
    } else if (n<0) {
        cout<<" bilangan negatif "<<endl;
    } else if (n==0) {
        cout<<" bilangan nol "<<endl;
    }
}
cout<<" Kelompok bilangan positif : "<<positif<<endl;
return 0;
}
