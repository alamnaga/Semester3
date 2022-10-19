// NIM: 118140006
// Nama : Fitra Salam S. Nagalay
// Tanggal : 05/11/2020
// Deskripsi : Prima VS Komposit

#include <iostream>
using namespace std;

int ambil(int bil, int i){ 
	if (i == 1)	return 1;  
	else if (bil % i == 0) return 1 + ambil(bil, --i); 
	else return 0 + ambil(bil, --i); 
}
  
int cek(int bil){ 
	if (bil > 1) return (ambil(bil, bil) == 2);
	else return false;
}

int main(){
	int N, bil;
	cin>>N;

	for(int i=0; i<N; i++){
		cin >> bil;
		if (cek(bil)) 
			cout << "prima " << endl;
		else 
			cout << "komposit " << endl;
	}
}
