#include <stdio.h> 
#include <math.h> 
int main(){
  float a,b,c;
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  // applying heron's formula
  float s = (a+b+c)/2;
  float area_sq = s*(s-a)*(s-b)*(s-c);
  // float area = sqrt(area_sq);

  //using pow instead of sqrt
  float area = pow(area_sq,2);
  printf("\nArea: %f",area);


  return 0;
}
