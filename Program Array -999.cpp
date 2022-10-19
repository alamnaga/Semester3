#include <iostream>
using namespace std;

int main () {
int sum=0,sum1=0;
int A[10];

for (int i=0; i<10; i++){
    cin>>A[i];
    if (A[i]== -999){
        cout<<" bukan elemen array "<<endl;
        break;
    }
    sum=sum+A[i];
    sum1=sum1+1;
}
cout<<" jumlah total seluruh elemen = "<<sum<<endl;
cout<<" jumlah elemen array = "<<sum1;
return 0;
}
