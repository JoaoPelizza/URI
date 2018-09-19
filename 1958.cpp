#include <bits/stdc++.h>

using namespace std;

int main(void){

  char num_string[120];
  long double num;

  cin >> num;

  sprintf(num_string, "%LE", num);

  if(num_string[0]!='-') cout << "+";

  //for(int cont ; cont < 4 ; cont++){
    //cout << num_string[cont];
  //}

  printf("%.4LE\n", num);

  return 0;
}
