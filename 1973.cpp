#include <bits/stdc++.h>

using namespace std;

int main(void){

  long long int N;
  cin >> N;
  long long int *estrelas = (long long int*)malloc(N * sizeof(long long int));
  long long int carneiros = 0;

  for(int aux = 0; aux < N ; aux++ ){
    cin >> estrelas[aux];
    carneiros += estrelas[aux];
  }

  long long int *vitimas = (long long int*)malloc(N*sizeof(long long int));
  for(int aux=0;aux<N;aux++){
    vitimas[aux] = 0;
  }

  long long int num_vitimas = 0;
  long long int roubados = 0;


  for(int aux=0;aux<N && aux>=0;){

    if(estrelas[aux]==0) break;

    if(vitimas[aux] == 0){
      num_vitimas++;
      vitimas[aux] = 1;
    }

    if(estrelas[aux] % 2 == 1){
      roubados++;
      estrelas[aux]--;
      aux++;
    }

    else if(estrelas[aux] % 2 == 0){
      roubados++;
      estrelas[aux]--;
      aux--;
    }

  }
  cout << num_vitimas << " " << carneiros-roubados << endl;
  return 0;
}
