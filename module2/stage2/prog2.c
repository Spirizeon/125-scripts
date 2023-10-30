#include <stdio.h>

int main(){
  int cash;
  scanf("%d",&cash);
  float account_money = 100000000000;
  float total_withdrawn = cash - 50;
  cash<=50?printf("not enough cash"):(cash%500==0?printf("%f withdrawn.",total_withdrawn):printf("Not enough bank notes available!"));
  return 0;
}
