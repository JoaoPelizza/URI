#include <bits/stdc++.h>

using namespace std;

int main(void){

  int candidatos;
  list<double> notas;

  cin >> candidatos;

  while(candidatos--){
    string nome;
    cin >> nome;

    int avaliadores=0;//localizador
    double menor_nota=11,maior_nota=-1;//comparacao de notas
    double nota=0;
    double multiplicador=0;
    double sum=0;

    cin >> multiplicador;

    for(list<double>::iterator aux = notas.begin() ; avaliadores<7; aux++,avaliadores++){
      cin >> nota;
      notas.push_back(nota);

      if(menor_nota>nota) menor_nota = nota;
      if(maior_nota<nota) maior_nota = nota;
    }

    for(list<double>::iterator aux = notas.begin() ; aux!=notas.end() ;aux++){
      sum += (*(aux));
    }
    notas.clear();
    cout << nome;
    printf(" %.2lf\n",(sum-menor_nota-maior_nota)*multiplicador);
  }
  return 0;
}
