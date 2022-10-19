#include <iostream>
using namespace std;

struct mhs {
int kim,fis,mtk;
float rerata;
string nama;
};

int main(){
int n,sum=0,max=0;
cin >> n;
mhs x[n];

for (int i=0; i<n; i++){
    cin >> x[i].nama;
    cin >> x[i].kim;
    cin >> x[i].fis;
    cin >> x[i].mtk;
    x[i].rerata =(x[i].kim + x[i].fis + x[i].mtk)/3;

}
for (int i=0; i<n; i++){
    if (x[i].rerata > max ){
        max = x[i].rerata;
        cout << "siswa dg nilai rata-rata tertinggi adalah " << x[i].nama <<endl;
        }
        else if (x[i].rerata < 60){
            cout <<"siswa yang harus remidi adalah " <<  x[i].nama << endl;
        }
    }
}
