#include <stdio.h>

int main(){
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  a%2==0?printf("first number is even\n"):printf("first number is odd\n");
  b%2==0?printf("second number is even\n"):printf("second number is odd\n");
  return 0;
}
