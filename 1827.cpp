#include <bits/stdc++.h>

using namespace std;

int main(void){
  int x;
  while(cin >> x){

    if(x%2==0) return 0;

      for(int linha = 0 ; linha < x ; linha++){

        for(int coluna = 0 ; coluna < x ; coluna ++){
          if (linha == x/2 && coluna == x/2) cout << "4";
          else if
            (linha >= x/3 && linha < x-x/3 && coluna >= x/3 && coluna < x-x/3 ) cout << "1";
          else if( linha == coluna )    cout << "2";
          else if( coluna+linha == x-1) cout << "3";
          else cout << "0";
        }
        cout << endl;
      }
      cout << endl;
  }

  return 0;
}
