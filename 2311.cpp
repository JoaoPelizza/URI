#include<iostream>
#include<list>

using namespace std;

int main(void){

  int candidatos;
  list<int> notas;

  while(candidatos--){
    string nome;
    cin >> nome;

    int loc=0;//localizador
    int menor_nota=11,maior_nota=-1;//comparacao de notas
    list<int>::iterator loc_menor_nota, loc_maior_nota;//LOCALIZADOR DE NOTAS

    int nota;
    for(list<int>::iterator aux = notas.begin() ; aux!=notas.end(); aux++,loc++){
      cin >> nota;
      notas.push_back(nota);

      if(menor_nota>nota){
        menor_nota = nota;
        loc_menor_nota=aux;
      }

      if(maior_nota<nota){
        maior_nota = nota;
        loc_maior_nota=aux;
      }

    }
    notas.erase(loc_maior_nota);
    notas.erase(loc_menor_nota);
  }
  return 0;
}
