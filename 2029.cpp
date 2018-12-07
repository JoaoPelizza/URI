#include <bits/stdc++.h>
#define pi 3.14
using namespace std;

int main(void){
  double vol, dia;
  while(cin >> vol){
    cin >> dia;
    double r=dia/2;
    double h=(4*vol)/(3.14*pow(dia,2));

    printf("ALTURA = %.2lf\n", h);
    printf("AREA = %.2lf\n", pi*pow(r,2));
  }
  return 0;
}
