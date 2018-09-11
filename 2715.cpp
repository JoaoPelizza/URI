#include<iostream>
#include <list>

using namespace std;

int main(void){
  //int rang=0,gugu=0;

  int trabalhos;
  list<int> pesos;

  cin >> trabalhos;
  for(int aux=0;aux<trabalhos;aux++){
    int peso;
    cin >> peso;
    pesos.push_back(peso);
  }

  for(list<int>::iterator i = pesos.begin();i!=pesos.end();i++){
    for(list<int>::iterator j = i++ ; j!=pesos.end() ; j++ ){

    }

    cout << *(i) << endl;
  }

  return 0;
}
