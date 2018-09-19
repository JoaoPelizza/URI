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

  if(d==4){
    m++;
    d-=4;
    cout << "D";
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
  if(x==4){
    l++;
    x-=4;
    cout << "X";
  }
  if(v==4){
    x++;
    v-=4;
    cout << "V";
  }
  if(i==4){
    v++;
    i-=4;
    cout << "I";
  }
////////////////////////////////////////////////////////////////////
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
  if(d==2){
    m++;
    d-=2;
  }
  //cout << m << d << c << l << x << v << i << endl;
  int total=(m*1000)+(d*500)+(c*100)+(l*50)+(x*10)+(v*5)+i;

  while(total>0){

    if(m>0){
      cout << "M";
      m--;
      total-=1000;
    }
    if(d>0){
      cout << "D";
      d--;
      total-=500;
    }
    if(c>0){
      cout << "C";
      c--;
      total-=100;
    }
    if(l>0){
      cout << "L";
      l--;
      total-=50;
    }
    if(x>0){
      cout << "X";
      x--;
      total-=10;
    }
    if(v>0){
      cout << "V";
      v--;
      total-=5;
    }
    if(i>0){
      cout << "I";
      i--;
      total-=1;
    }

  }

  cout << endl;

  return 0;
}
//8 == VIII
//9 == IX
