#include<iostream>
using namespace std;
	
	void fungsi(int *x, int y){
		*x=1-y;
	}
	
	int main(){
		int x , y;
		cin>>y;
		fungsi(&x,y);
		
		cout<<x<<endl;
		cout<<"Jumlah= "<<x+y;
	}

