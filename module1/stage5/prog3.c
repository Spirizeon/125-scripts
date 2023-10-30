#include <stdio.h> 

int main(){
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  // if(a>b){
  //   printf("%d",a+b);
  // }
  // else{
  //   printf("%d",a-b);
  // }
  (a>b)?printf("%d",a+b):printf("%d",a-b);
  return 0;
}
