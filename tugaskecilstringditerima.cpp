#include <iostream>
using namespace std;

int main(){
	start:;
	
	int matriks [4][2]={{1,2},{1,2},{3,1},{2,3}};
	
	string binary, a;
	
	int asal=0, destinasi;
	
	cout<<"Masukan string yang mau di uji coba= "; cin>>binary;
	
	int l = binary.length();
	
	
	for (int i=0; i<l; i++){
		a=binary[i];
		
		if(a=="0")destinasi=0;
		else if(a=="1")destinasi=1;
		
		cout<<"q"<<asal<<" Masuk "<<destinasi<<" ke q"<<matriks[asal][destinasi]<<endl;
	asal = matriks[asal][destinasi];	
		
	}
	cout<<endl<<"Hasil";
	if(asal==1){
		cout<<"\nString barakhir pada q"<<asal<<" (Final State)";
		cout<<"\nyang berarti string DITERIMA";
	}else{
		cout<<"\nString berakhir pada q"<<asal<<" (Bukan Final State)";
		cout<<"\nyang berarti string DITOLAK";
	}
	cout<<"\n===================================================="<<endl;
	
	string ulangi;
	cout<<"Ketik 'y' jika ingin mencoba string lagi";
	cin>>ulangi;
	cout<<endl;
	if(ulangi=="y")goto start;
	else return 0;
}
