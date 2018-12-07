#include <bits/stdc++.h>

using namespace std;

int main(void){

  char player1[10],player2[10];
  int rodadas;
  cin >> rodadas;

  while(rodadas--){
    cin >> player1 >> player2;

    if(strcmp(player1,player2) == 0){
      if(strcmp(player1,"ataque")==0){
        cout << "Aniquilacao mutua" << endl;
      }
      else if (strcmp(player1,"papel") == 0){
        cout << "Ambos venceram" << endl;
      }
      else if(strcmp(player1,"pedra")==0){
        cout << "Sem ganhador" << endl;
      }
    }
    else{
      if(strcmp(player1,"ataque")==0){
        cout << "Jogador 1 venceu" << endl;
      }
      else if(strcmp(player1,"pedra")==0 && strcmp(player2,"papel")==0){
        cout << "Jogador 1 venceu" << endl;
      }
      else{
        cout << "Jogador 2 venceu" << endl;
      }
    }
  }
  return 0;
}
