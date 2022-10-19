#include <iostream>
using namespace std;

int faktorial(int n){

if(n<=1){
	cout<<n<<"=";
	return n;
}else{
	cout<<n<<"*";
	return n*faktorial(n-1);
}
}
int main(){
	int angka;
	cout<<"FAKTORIAL\n";
	cout<<"Masukan angka=";
	cin>>angka;
	
cout<<faktorial(angka);
	

	return 0;
}
