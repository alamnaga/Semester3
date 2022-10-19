#include <iostream>
using namespace std;
main(){
    bool accept[5]={false,false, false,true,true};       //state akhir
    int dfa[5][2]={{1,3},{2,0},{4,2},{0,4},{1,2}};     //DEFINISI DFA
    char inp[10];                           //STRING INPUT
    int state;
    int input;                             //ELEMEN HIMP. INPUT
    int pos;                          //penunjuk posisi pembacaan input
    char lagi;
    do{
        cout<<"Masukkan input (beri spasi di akhir) :  ";
        cin>>inp;          //masukkan string input
        state = 0;        //mulai dari state awal
for(pos=0;inp[pos];pos++)
             {
                    if(inp[pos]=='a') input = 0;   //input 0 diwakili dengan bil 0
            else if(inp[pos]=='b') input=1; //input a diwakili dengan bil 1
 
                state = dfa[state][input]; //fungsi transisi
              }
             //jika state terakhir adalah final state maka diterima
            if (accept[state]) cout<<"String tersebut diterima (ACCEPTED) \n";
            else cout<<"String Tersebut Ditolak (REJECTED)\n";
        cout<<"Masukkan input lain? (y/t) : ";  cin>>lagi;
    } while(lagi!='t');
}
