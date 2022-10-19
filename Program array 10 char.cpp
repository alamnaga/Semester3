#include <iostream>
using namespace std;

int main () {
int n;
char A[10];
float sum,sum1;

for (int i=0; i<10; i++){
    cout<<" Indeks ke - "<<i<<" = ";
    cin>>A[i];
}
for (int i=0; i<10; i++){
if(A[i]%2==1){
    cout<<A[i]<<" Ganjil "<<endl;
    sum1=sum1+1;
}
else if (A[i]%2==0){
    cout<<A[i]<<" Genap "<<endl;
    sum=sum+1;
}
}

return 0;
}
