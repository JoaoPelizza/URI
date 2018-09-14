#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(void){

  long long trabalhos;
  vector<long long> pesos;

  while( cin >> trabalhos ){
    pesos.clear();

    for(long long aux=0, peso=0 ; aux<trabalhos ; aux++){
      cin >> peso;
      pesos.push_back(peso);
    }

    long long sum_i=0 , sum_j=0;
    long long dif=999999999;

    for(vector<long long>::iterator aux = pesos.begin() ; aux!=pesos.end() ; aux++ ){
      sum_j+=(*aux);
    }

    for(vector<long long>::iterator aux = pesos.begin() ; aux!=pesos.end() ; aux++ ){
      sum_i+=(*aux);
      sum_j-=(*aux);

      if(abs(sum_i-sum_j)==0){
        dif=0;
        break;
      }
      else if(abs(sum_i-sum_j)<dif) dif=abs(sum_i-sum_j);

    }

    cout << dif << endl;
    }
    return 0;
  }
