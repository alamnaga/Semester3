#include <iostream>
#include <stack>
using namespace std;

int matrix[19][128];

void set_False(int matrix[19][128]){ /*Untuk table transisi state (berisi nilai NULL / -1 */
  for(int i = 0 ; i < 19 ; i++){
    for(int j = 0 ; j < 128 ; j++){
      matrix[i][j] = -1;
    }
  }
}
void set_Proses(){ /*Untuk tabel transisi*/
  matrix[0][32] = 0;
  //HURUF KECIL

  matrix[0][99]  = 1;
  matrix[1][101] = 2;
  matrix[2][116] = 3;
  matrix[3][97]  = 4;
  matrix[4][107] = 5;
  matrix[5][32]  = 6;
  matrix[6][32]  = 6;
  matrix[6][34]  = 7;

  /*== operator aritmatika (+,-,*,/)  dan angka */

  matrix[6][40]=18;
  matrix[6][41]=18;
  matrix[6][42]=18;
  matrix[6][43]=18;
  matrix[6][45]=18;
  matrix[6][47]=18;
  matrix[6][48]=18;
  matrix[6][49]=18;
  matrix[6][50]=18;
  matrix[6][51]=18;
  matrix[6][52]=18;
  matrix[6][53]=18;
  matrix[6][54]=18;
  matrix[6][55]=18;
  matrix[6][56]=18;
  matrix[6][57]=18;
  matrix[18][40]=18;
  matrix[18][41]=18;
  matrix[18][42]=18;
  matrix[18][43]=18;
  matrix[18][45]=18;
  matrix[18][47]=18;
  matrix[18][48]=18;
  matrix[18][49]=18;
  matrix[18][50]=18;
  matrix[18][51]=18;
  matrix[18][52]=18;
  matrix[18][53]=18;
  matrix[18][54]=18;
  matrix[18][55]=18;
  matrix[18][56]=18;
  matrix[18][57]=18;
  matrix[18][32]=18;
  matrix[18][59]=19;

  /* HURUF BESAR */
  matrix[0][67] = 1; //C
  matrix[1][69] = 2; //E
  matrix[2][84] = 3; //T
  matrix[3][65] = 4; //A
  matrix[4][75] = 5; //K

  	for(int i = 0 ; i < 128 ; i++){
    	matrix[7][i] = 7;
  	}

  matrix[7][34] = 8;
  matrix[8][32] = 8;
  matrix[8][59] = 9;
  matrix[0][115] = 10;
  matrix[10][101] = 11;
  matrix[11][108] = 12;
  matrix[12][101] = 13;
  matrix[13][115] = 14;
  matrix[14][97] = 15;
  matrix[15][105] = 16;
  matrix[16][32] = 16;
  matrix[16][59] = 17;
  matrix[0][83] = 10;
  matrix[10][69] = 11;
  matrix[11][76] = 12;
  matrix[12][69] = 13;
  matrix[13][83] = 14;
  matrix[14][65] = 15;
  matrix[15][73] = 16;

}
bool isoperasi(char cek){
    return(cek=='+' || cek=='-' || cek=='*' || cek=='/' || cek=='(' || cek==')');
}
bool Digit(char cek){
    return (cek >= '0' && cek <='9');
}
int Perintah(int x, int y, char operasi){ /*Perintah OperasiPenjumlahan,Pengurangan ,Pembagian,dan Perkalian*/
    if(operasi == '+'){
        return x+y; //Penjumlahan
    }else if(operasi =='-'){
        return x-y; //Pengurangan
    }else if(operasi =='*'){
        return x*y; //Perkalian
    }else{
        return x/y; //Pembagian
    }
}
int getPredence(char pil){
    switch(pil){
    case '+' :

    case '-' : return 1;

    case '*' :

    case '/' : return 2;

    case '(' :

    case ')' : return 3;

    default : return -1;
    }
}
int OPERASIKAN(string OPR){
    stack<int> str;
    stack<char> opertor;

    int simpan=0;
    int i=0;

    while(i<OPR.length()){
        char OPERASI = OPR[i];
        if(Digit( OPERASI)){
            simpan= (simpan*10) + (int)( OPERASI - '0');
        }else if(isoperasi( OPERASI)){
            if( OPERASI =='('){
                opertor.push( OPERASI);
                simpan=0;
            }else if(str.empty()){
                str.push(simpan);
                opertor.push( OPERASI);
                simpan=0;
            }else if( OPERASI ==')'){
                str.push(simpan);
                while(opertor.top() != '('){
                    OPERASI = opertor.top();
                    opertor.pop();
                    simpan=str.top();
                    str.pop();
                    int pre = str.top();
                    str.pop();
                    simpan = Perintah(pre,simpan, OPERASI);
                    str.push(simpan);
                }
                opertor.pop();
                str.pop();
            }else{
                char prec = opertor.top();
                if(prec=='('){
                    str.push(simpan);
                    opertor.push( OPERASI);
                    simpan=0;
                }else if(getPredence( OPERASI) > getPredence(prec)){
                    str.push(simpan);
                    opertor.push(OPERASI);
                    simpan=0;
                }else{
                    int prevval = str.top();
                    str.pop();
                    char prevop = opertor.top();
                    opertor.pop();
                    prevval=Perintah(prevval,simpan,prevop);
                    str.push(prevval);
                    opertor.push( OPERASI);
                    simpan=0;
                }
            }
        }
        i++;
    }
    while(!opertor.empty()){
        int prevs = str.top();
        str.pop();
        char preop = opertor.top();
        opertor.pop();
        simpan = Perintah(prevs,simpan,preop);
    }
    return simpan;
}
bool isStuck(int states){
  if (states < 0){
    return true;
  }else{
    return false;
  }
}
bool akhir(int states){
  if(states == 9 || states == 17 || 19){
    return true;
  }else{
    return false;
  }
}
bool berakhir(int states){
  if(states == 17){
    return true;
  }else{
    return false;
  }
}
void SimpanProsesOperasi(string *x, char y){
    *x = *x + y;
}
void SimpanKata (string *x, char y){
  *x = *x + y;
}
/*== Mencari atau Mengecek di setiap state ==*/
void Cari(string x, bool *selesai){
  int i = 0;
  int state = 0;
  string kata="\0";
  string opr="\0";

  while(i < x.length() && isStuck(state) == false){
    state = matrix[state][x[i]];

    if(state == 7 && x[i] != 34){
        SimpanKata(&kata, x[i]);
    }else if(state==18 && x[i] != 59){
        SimpanProsesOperasi(&opr,x[i]);
    }
    i++;
  }

  if(isStuck(state) == true || akhir(state) == false ){
    kata = "\0";
    cout << "> KESALAHAN PADA INPUT"<< endl;
    return;
  }else{
    if(berakhir(state) == true){
        cout << "TERIMAKASIH TELAH MENNGUNAKAN COMPILER KAMI";
        *selesai = true;
    }else if(state==19){
        int simpan = OPERASIKAN(opr);
        cout << "> " << simpan << endl;
    }
    else cout << "> " << kata << endl;
    return;
  }
}
void Compile(){
  string x;
  bool selesai = false;
  while(selesai ==false){

    cout <<"# ";
    getline(cin,x);
    Cari(x, &selesai);
  }
}
int main(){
  set_False(matrix);
  set_Proses();
  Compile();

  return 0;
}
