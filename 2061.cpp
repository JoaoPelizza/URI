#include <bits/stdc++.h>

using namespace std;

int main(void){
  int abas, loop;
  cin >> abas >> loop;
  string acao;
  while(loop--){
    cin >> acao;
    if(acao=="fechou") abas++;
    else abas--;
  }
  cout << abas << endl;
  return 0;
}
