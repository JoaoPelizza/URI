#include <bits/stdc++.h>

using namespace std;

int return_lenght(string num){
  int tamanho=0;
  while(num[tamanho] != '\0') tamanho++;
  return tamanho;
}

int main(void){

  string num;
  cin >> num;
  for(int aux = return_lenght(num)-1 ; aux >= 0 ; aux--){
    cout << num[aux];
  }
  cout << endl;

  return 0;
}
