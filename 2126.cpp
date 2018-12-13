#include <bits/stdc++.h>

using namespace std;

int main(void){
  string num; // subsequencia contigua, o numero que vou pesquisar no maior
  string maior; // aonde a subsequencia contigua será procurada;

  unsigned int qntsub=0;
  unsigned int pos=0;

  unsigned int aux;
  unsigned int aux_pesquisa;

  unsigned loop=1;
  while(cin >> num){
    cin >> maior;
    for(aux_pesquisa = aux = 0; aux_pesquisa < maior.size() ; aux_pesquisa++){

      if(num[0]==maior[aux_pesquisa]){
        aux=0;
        for(int aux2=aux_pesquisa; num[aux]==maior[aux2] ;aux++,aux2++){
          if(aux == num.size() - 1){
            qntsub++;
            pos=aux_pesquisa;
          }
        }
      }
    }
    if(qntsub==0){
      cout << "Caso #" << loop++ <<  ":" << endl;
      cout << "Nao existe subsequencia" << endl << endl;
    }
    else{
      cout << "Caso #" << loop++ <<  ":" << endl;
      cout << "Qtd.Subsequencias: " << qntsub << endl;
      cout << "Pos: " << pos+1 << endl << endl;
      qntsub=0;
      pos=0;
    }
  }
  return 0;
}
