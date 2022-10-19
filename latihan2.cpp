#include <iostream>
using namespace std;

void fungsi (int *x, int y, int *z){
	for(int i=1; i<=y; i++){
		*x = *x + (2 * y);
		*z = *z * (3 + y);
	}	
}

int main(){
	int x = 0,y,z = 1;
	cin>>y;
	fungsi(&x ,y, &z);
	cout<<x<<endl;
	cout<<z<<endl;
}
