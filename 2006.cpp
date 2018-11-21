#include <bits/stdc++.h>

using namespace std;

int main(void){

  int cha,gormet;
  int corretos=0;
  cin >> cha;

  for(int aux=0;aux<5;aux++){
    cin >> gormet;
    if(gormet == cha) corretos++;
  }
  cout << corretos << endl;

  return 0;
}
