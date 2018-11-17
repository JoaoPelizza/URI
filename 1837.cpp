#include <bits/stdc++.h>

using namespace std;

int main(void){

  int a, b;
  cin >> a >> b;

  if( a < 0 ){
    int q,r;

    for(r=0 ; r < abs(b); r++){//regra definida
      q = a-r;
      if(q%b==0) break;//divisão perfeita
    }

    cout << q/b << " " << r << endl;

  }
  else{

    cout << (a/b) << " " << (a%b) << endl;

  }

  return 0;
}
