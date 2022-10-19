#include <iostream>

using namespace std;

int deret(int n){
	if (n == 1)
	return n;
	else
	return (n+ deret(n-1));
}
main(){
	int n;
	cout<<"Masukan n= "; cin>>n;
	if(n<=0){
			cout<<"Tidak bisa di itung";
	}else
	cout<<"Deret= ...+n = "<<deret(n);
}

