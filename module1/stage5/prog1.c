#include <stdio.h>

int main(){
  int a;
  scanf("%d",&a);
  a>0?printf("positive"):(a=0?printf("zero"):printf("negeative"));
  return 0;
}
