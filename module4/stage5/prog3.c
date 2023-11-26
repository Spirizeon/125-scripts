#include <stdio.h>

int main(){
  int num;
  scanf("%d",&num);
  if(num%2==0){
    goto even;
  }
  else{
    goto odd;
  }

  even:
  printf("even");
  return 0;

  odd:
  printf("odd");
  return 0;
}
