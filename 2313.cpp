#include <bits/stdc++.h>

using namespace std;

int main(void){

  int a,b,c;
  bool noventagrau = false;

  cin >> a >> b >> c;

  if(a<b && c<b){
    if(b == sqrt(pow(a,2)+pow(c,2))) noventagrau = true;
  }
  else if(b<a && c<a){
    if(a == sqrt(pow(b,2)+pow(c,2))) noventagrau = true;
  }
  else if(a<c && b<c){
    if(c == sqrt(pow(a,2)+pow(b,2))) noventagrau = true;
  }

  if((a<(b+c)) && (b<(a+c)) && (c<(a+b))){
    cout << "Valido-";

    if(a==b && b==c){
      cout << "Equilatero";
    }
    else if( (a==b && a!=c) || (a==c && a!=b) || (b==c && a!=b)){
      cout << "Isoceles";
    }
    else{
      cout << "Escaleno";
    }

    if(noventagrau==true){
      cout << endl << "Retangulo: S" << endl;
    }
    else{
      cout << endl << "Retangulo: N" << endl;
    }
  }
  else{
    cout << "Invalido" << endl;
  }

  return 0;
}
