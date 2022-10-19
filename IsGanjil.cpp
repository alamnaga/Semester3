#include <iostream>
using namespace std;

int IsGanjil (int n) {
if(n%2==1) {
return n;
} else {
return n;
}
}
int main () {
int n;

cin >> n;
if (IsGanjil(n)%2==1){
cout << IsGanjil(n)<<" : TRUE "<<endl;
}
else
{
    cout<<IsGanjil(n)<<" : FALSE "<<endl;
}
return 0;
}
