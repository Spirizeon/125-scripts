#include <stdio.h>

int main(){
  float XX,YY;
  printf("Enter fare for the first taxi: ");
  scanf("%f",&XX);
  printf("\nEnter fare for the second taxi: ");
  scanf("%f",&YY);
  XX>YY?printf("\nTake the second taxi"):printf("\nTake the first taxi");
  return 0;
}
