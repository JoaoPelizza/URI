#include <bits/stdc++.h>

using namespace std;

int main(void){

  int num;
  cin >> num;
  int m,d,c,l,x,v,i;
  m=num/1000;
  d=(num%1000)/500;
  c=(num%500)/100;
  l=(num%100)/50;
  x=(num%50)/10;
  v=(num%10)/5;
  i=num%5;

  cout << m << d << c << l << x << v << i << endl;


  //cout << m << d << c << l << x << v << i << endl;
  int total=(m*1000)+(d*500)+(c*100)+(l*50)+(x*10)+(v*5)+i;

  while(total>0){


    if(i==5){
      v++;
      i-=5;
    }
    if(v==2){
      x++;
      v-=2;
    }

    if(x==5){
      l++;
      x-=5;
    }
    if(l==2){
      c++;
      l-=2;
    }
    if(c==5){
      d++;
      c-=5;
    }
    if(c==4){
      d++;
      c-=4;
      cout << "C";
    }
    if(l==4){
      c++;
      l-=4;
      cout << "L";
    }
    if(d==4){
      m++;
      d-=4;
      cout << "D";
    }
    if(d==2){
      m++;
      d-=2;
    }


    while(m>0){
      cout << "M";
      m--;
      total-=1000;
    }

    /////////

    while(d>0){
      cout << "D";
      d--;
      total-=500;
    }
    ////////

    while(c>0){
      cout << "C";
      c--;
      total-=100;
    }

    ////////

    if(x==4){
      l++;
      x-=4;
      cout << "X";
    }
    while(l>0){
      cout << "L";
      l--;
      total-=50;
    }

    ///////

    if(v==4){
      x++;
      v-=4;
      cout << "V";
    }
    while(x>0){
      cout << "X";
      x--;
      total-=10;
    }

    //////////


    if(i==4){
      v++;
      i-=4;
      cout << "I";
    }
    while(v>0){
      cout << "V";
      v--;
      total-=5;
    }

    //////////

    while(i>0){
      cout << "I";
      i--;
      total-=1;
    }


    /////////////
  }

  cout << endl;

  return 0;
}
//8 == VIII
//9 == IX
