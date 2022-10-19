// NIM: 118140006
// Nama : Fitra Salam S. Nagalay
// Tanggal : 05/11/2020
// Deskripsi : X kuadrat

#include<iostream>
using namespace std;

int pangkat (int *x,int y){

if(y==1)

return (*x);

else

return(*x * pangkat(x,y-1));

}

int main(){
    
int x,y;

cin>>x>>y;

cout<<pangkat(&x,y);

}
