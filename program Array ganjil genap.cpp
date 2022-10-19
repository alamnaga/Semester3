#include <iostream>
using namespace std;

int main () {
int sum=0, i, sum1=0;
int A[5]={1,2,3,4,5};

for (int i=0; i<5; i++){
if(A[i]%2==1){
    cout<<A[i]<<" Ganjil "<<endl;
    sum1=sum1+1;
}
else if (A[i]%2==0){
    cout<<A[i]<<" Genap "<<endl;
    sum=sum+1;
}
}

cout<<" jumlah bilangan genap = "<<sum<<endl;
cout<<" jumlah bilangan ganjil = "<<sum1<<endl;
return 0;
}
