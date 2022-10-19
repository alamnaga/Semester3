#include<iostream>
#include<cmath>
using namespace std;

float Latihan6(float n, float hasil){
	if(n<=1){
		return hasil+=n*4;
	} else {
		hasil+=n*4;
		return Latihan6(n/2*sqrt(2),hasil);
	}
}
int main(){
	cout<<Latihan6(100,0);
}
