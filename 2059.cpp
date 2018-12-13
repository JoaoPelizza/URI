#include <bits/stdc++.h>

using namespace std;

int main(void){
  //jogador 1: 1 par ; 0 impar
  int p;
  cin >> p;
  //jogador 1 e 2 numeros
  int j1,j2;
  cin >> j1 >> j2;
  //jogador 1 e 2 roubo;
  int r1,r2;
  cin >> r1 >> r2;

  if((r1==1 && r2==0) || (r1==0 && r2==1)){
    cout << "Jogador 1 ganha!" << endl;
  }
  else if((r1==1 && r2==1)){
    cout << "Jogador 2 ganha!" << endl;
  }
  else{
    if((p==0 && (j1+j2)%2==1) || (p==1 && (j1+j2)%2==0)){
      cout << "Jogador 1 ganha!" << endl;
    }
    else{
      cout << "Jogador 2 ganha!" << endl;
    }
  }

  return 0;
}
