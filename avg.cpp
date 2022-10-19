#include <iostream>
using namespace std;

int avg(int a, int b)
{
   if(a>b){
   	return a + avg(a -4, b-3);
   	cout<<"Mantap\n";
   }else if(a<b){
   	return a - avg(a-3,b-4);
   	cout<<"mantapbekk\n";
   }else{
   	return a*b;
   	cout<<"iyehhh\n";
   }
}
	
int main() 
{
    cout<<avg(0,6)<<endl;
}
