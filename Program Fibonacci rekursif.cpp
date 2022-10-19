#include <iostream>
using namespace std;

int drt (int n){

if(n==0){
    return 0;
}
else {
    return 2*n+drt(n-1);
}
}
int main () {

    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        if(n<=0){
            cout<<" tidak dapat dihitung "<<endl;
    }
        else {
            cout<<" "<<drt(i)<<" "<<endl;


    }cout<<" + "<<endl;
}cout<<" hasil total "<<drt(n)<<" ";

return 0;
}
