#include <iostream>
using namespace std;

int main () {
int i, j, m, n;
int Hasil[3][4];
int A[3][4];
int B[3][4];

cout<<" masukkan jumlah baris = ";
cin>>m;
cout<<" masukkan jumlah kolom = ";
cin>>n;

    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            cin>>A[i][j];
        }
        cout<<endl;
    }
    cout<<" + "<<endl;
    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            cin>>B[i][j];
        }
        cout<<endl;
    }
    cout<<" = "<<endl;
    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
    Hasil[i][j]=A[i][j]+B[i][j];
    cout<<Hasil[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
