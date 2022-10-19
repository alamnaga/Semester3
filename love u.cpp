#include <iostream>
using namespace std;

int main () {
int i, j;

for(i=1; i<=12; i++){
for (j=1; j<=26; j++){
if (i==1) if (((j>=1&&j<=3)||(j>=7&&j<=9)||(j>=15&&j<=17)||(j>=21&&j<=22)||(j>=25&&j<=26))) cout<<"*"; else cout<<" ";
else if (i==2) if (((j>=1&&j<=3)||(j>=6&&j<=10)||(j>=14&&j<=18)||(j>=21&&j<=22)||(j>=25&&j<=26))) cout<<"*"; else cout<<" ";
else if (i==3) if (((j>=1&&j<=3)||(j>=5&&j<=11)||(j>=13&&j<=19)||(j>=21&&j<=22)||(j>=25&&j<=26))) cout<<"*"; else cout<<" ";
else if (i==4) if (((j>=1&&j<=3)||(j>=5&&j<=19)||(j>=21&&j<=22)||(j>=25&&j<=26))) cout<<"*"; else cout<<" ";
else if (i==5) if (((j>=1&&j<=3)||(j>=5&&j<=19)||(j>=21&&j<=22)||(j>=25&&j<=26))) cout<<"*"; else cout<<" ";
else if (i==6) if (((j>=1&&j<=3)||(j>=6&&j<=18)||(j>=21&&j<=22)||(j>=25&&j<=26))) cout<<"*"; else cout<<" ";
else if (i==7) if (((j>=1&&j<=3)||(j>=7&&j<=17)||(j>=21&&j<=22)||(j>=25&&j<=26))) cout<<"*"; else cout<<" ";
else if (i==8) if (((j>=1&&j<=3)||(j>=8&&j<=16)||(j>=21&&j<=22)||(j>=25&&j<=26))) cout<<"*"; else cout<<" ";
else if (i==9) if (((j>=1&&j<=3)||(j>=9&&j<=15)||(j>=21&&j<=22)||(j>=25&&j<=26))) cout<<"*"; else cout<<" ";
else if (i==10) if (((j>=1&&j<=3)||(j>=10&&j<=14)||(j>=21&&j<=26)))cout<<"*"; else cout<<" ";
else if (i==11) if (((j>=1&&j<=3)||(j>=11&&j<=13)||(j>=21&&j<=26)))cout<<"*"; else cout<<" ";
else if (i==12) if (((j>=1&&j<=3)||(j==12)||(j>=21&&j<=26)))cout<<"*"; else cout<<" ";

}
cout<<endl;
}
return 0;
}
