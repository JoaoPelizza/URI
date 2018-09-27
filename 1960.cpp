#include <bits/stdc++.h>
//peguei lógica das interwebs
using namespace std;

void sp(int i);
void pp(int n);

int total,i,j;

int main()
{
    int cent;
    while(scanf("%d",&total)!=EOF){
        if(total>99){
            cent=total/100;
            if(cent==4){
                cout << "CD";
                total = total-400;
                pp(total);
                cout << endl;
            }
            else if(cent==9){
                cout <<("CM");
                total = total-900;
                pp(total);
                cout <<("\n");
            }
            else if(cent==1){
                cout <<("C");
                total = total-100;
                pp(total);
                cout <<("\n");
            }
            else if(cent==2){
                cout <<("CC");
                total = total-200;
                pp(total);
                cout <<("\n");
            }
            else if(cent==3){
                cout <<("CCC");
                total = total-300;
                pp(total);
                cout <<("\n");
            }
            else if(cent==5){
                cout <<("D");
                total = total-500;
                pp(total);
                cout <<("\n");
            }
            else if(cent==6){
                cout <<("DC");
                total = total-600;
                pp(total);
                cout <<("\n");
            }
            else if(cent==7){
                cout <<("DCC");
                total = total-700;
                pp(total);
                cout <<("\n");
            }
            else if(cent==8){
                cout <<("DCCC");
                total = total-800;
                pp(total);
                cout <<("\n");
            }
        }
        else if(total >= 10 && total < 100){
            pp(total);
            cout <<("\n");
        }
        else if(total<10){
            i=total;
            sp(i);
            cout <<("\n");
        }

    }

    return 0;
}


void sp(int i){
    if(i==1)cout <<("I");
    else if(i==2)cout <<("II");
    else if(i==3)cout <<("III");
    else if(i==4)cout <<("IV");
    else if(i==5)cout <<("V");
    else if(i==6)cout <<("VI");
    else if(i==7)cout <<("VII");
    else if(i==8)cout <<("VIII");
    else if(i==9)cout <<("IX");
}


void pp(int total){
    j = total/10;
    if(j==1){
        cout <<("X");
        i = total-10;
        sp(i);
    }
    else if(j==2){
        cout <<("XX");
        i = total-20;
        sp(i);
    }
    else if(j==3){
        cout <<("XXX");
        i = total-30;
        sp(i);
    }
    else if(j==4){
        cout <<("XL");
        i = total-40;
        sp(i);
    }
    else if(j==5){
        cout <<("L");
        i = total - 50;
        sp(i);
    }
    else if(j==6){
        cout <<("LX");
        i = total-60;
        sp(i);
    }
    else if(j==7){
        cout <<("LXX");
        i = total-70;
        sp(i);
    }
    else if(j==8){
        cout <<("LXXX");
        i = total-80;
        sp(i);
    }
    else if(j==9){
        cout <<("XC");
        i = total-90;
        sp(i);
    }
    else if(j==0){
        i=total;
        sp(i);
    }
}
