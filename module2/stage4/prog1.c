#include <stdio.h>

int main(){
  int i;
  scanf("%d",&i);
  while(i>1){
    i *= i--;
  }
  printf("%d",i);
  return 0;
}
