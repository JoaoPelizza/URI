#include <bits/stdc++.h>

using namespace std;

int main(void){

  int h1,m1,h2,m2;
  while(1){
    cin >> h1 >> m1 >> h2 >> m2;
    if(h1==h2 && m1==m2 && m1==h1 && m1==0) return 0;

    if(h2<h1)h2+=24;
    if(h1==h2 && m2<m1)h2+=24;

    cout << ((h2-h1)*60) + m2-m1 << endl;
  }
  return 0;
}
