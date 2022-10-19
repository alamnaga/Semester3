#include<iostream>
using namespace std;

void deretsegit(int n,int x, int total){
	if(x==n){
		cout<<x+total;
	}else {
		cout<<x+total<<',';
		deretsegit(n,x+1,total+x);
	}
}

int main(){
	int n;
	cin>>n;
	deretsegit(n,1,0);
}
