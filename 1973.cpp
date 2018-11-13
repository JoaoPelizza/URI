#include <bits/stdc++.h>

using namespace std;

int main(void){
  vector<int> estrelas;


  int loop;
  cin >> loop;
  long long total_ovelhas=0;
  for(vector<int>::iterator aux=estrelas.begin();loop>0;aux++,loop--){
    int ovelhas;
    cin >> ovelhas;
    total_ovelhas+=ovelhas;
    estrelas.push_back(ovelhas);
  }

  vector<int> vitimas;
  for( unsigned int aux=0; aux < estrelas.size() && estrelas[aux]!=0;){


    int ja_ta_dentro=0;
    for( vector<int>::iterator aux2 = vitimas.begin(); aux2!=vitimas.end() ; aux2++){
      if(signed (aux) == *aux2){
        ja_ta_dentro++;
      }
    }

    if(ja_ta_dentro==0){
      vitimas.push_back(aux);
    }


    if(estrelas[aux]%2==1){
      estrelas[aux]--;
      total_ovelhas--;
      aux++;
    }

    else if(estrelas[aux]%2==0){
      estrelas[aux]--;
      total_ovelhas--;
      aux--;
    }

  }

  cout  << vitimas.size() << " " << total_ovelhas << endl;




  return 0;
}
