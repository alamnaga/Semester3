#include <iostream> 
#include <iomanip> 
#include <conio.h> 
using namespace std;

	
	void bubble( int a[], int N);
		void tukar(int a, int b);

main(){
	
	int i,N;
	
	cout<<"Masukan banyak data= "; cin>>N;
	int l[N];
	for (i=0; i<N; i++){
		cout<<"data ke "<<i+1<<"= ";
		cin>>l[i];
	}
	bubble(l, N);
	
	cout<<"data array terurut \n";
	for(i=0; i<N; i++){
		cout<<l[i]<<" ";
	}
}
	void tukar(int a, int b)
	{
	int temp;
	temp=a;
	a=b;
	b=temp;
	}
void bubble( int a[], int N){
	int A,b, maks;
	
	for (A=1; A<=N; A++)
	{
	 for (b=1; b<=N; b++)
	{if (a[b]<a[b+1])
	
	tukar(a[A],a[b]);
}}
}



