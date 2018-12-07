#include <bits/stdc++.h>

using namespace std;

int somatorio(int x){
  if(x==0) return 1;
  return x+somatorio(x-1);
}

int main(void){

  int casos=1;
  int num;
  while(cin >> num){

    if(num==0){
      cout << "Caso " << casos++ << ": " << somatorio(num) << " numero" << endl;
      cout << "0" << endl << endl;
    }
    else{
      cout << "Caso " << casos++ << ": " << somatorio(num) << " numeros" << endl;
      cout << "0 ";
      for(int aux=0,cont=1;aux<num;cont++,aux++){
        for(int aux2=0;aux2<cont;aux2++){
          cout << cont;
          if(cont==num && aux2==cont-1){
            cout << endl << endl;
          }
          else cout << " ";
        }
      }
    }
  }
  return 0;
}
