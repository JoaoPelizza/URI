#include <bits/stdc++.h>

using namespace std;

int main(void){

  int cont;
  cin >> cont;

  unsigned int code;
  double nota, maior_nota=8;
  int chosen=-1;

  for(int aux = 0 ; aux<cont ; aux++ ){
    cin >> code >> nota;
    if(nota>=maior_nota){
      chosen = code;
      maior_nota = nota;
      if(maior_nota==10) break;
    }
  }

  if(chosen == -1) cout << "Minimum note not reached" << endl;
  else{
    cout << chosen << endl;
  }

  return 0;
}
