#include <bits/stdc++.h>

using namespace std;

int main(void){
  int s,t,f;
  cin >> s >> t >> f;
  int out=s+t+f;
  if(out<0) out +=24;
  if(out>=24) out-=24;
  cout << out << endl;


  return 0;
}
