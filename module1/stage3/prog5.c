#include <stdio.h>
#include <math.h> 

int main(){
  /* volume formula
  4 /pi r^3 / 3 
  pi is a constant
  r is a variable
  */
  float r;
  scanf("%f",&r);
  // for pi we are using 22/7
  float pi = (float)22/7;
  float volume = (4*pi*pow(r,3))/3;
  printf("\nVolume: %f",volume);
  return 0;
}
