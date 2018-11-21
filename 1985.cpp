\\#include <bits/stdc++.h>

using namespace std;

int main(void){
  int pedidos, num=0, quant;
  double custo=0;
  cin >> pedidos;
  while(pedidos--){
    cin >> num >> quant;
    switch (num) {
      case 1001:
        custo += 1.50*quant;
        break;
      case 1002:
        custo += 2.50*quant;
        break;
      case 1003:
        custo += 3.50*quant;
        break;
      case 1004:
        custo += 4.50*quant;
        break;
      case 1005:
        custo += 5.50*quant;
        break;
    }

  }

  printf("%.2f\n", custo );

  return 0;
}
