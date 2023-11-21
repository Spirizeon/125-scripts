#include <stdio.h>
int main(){
  int n,a=1,b=1,c=0,temp,counter=0;
  scanf("%d",&n);
  while(a<=n){
     c = a + b;
     temp = b;
     b = c;
     a = temp;
     if(a==n){
      counter++;
    }
  }
  counter>0?printf("fibonacci number"):printf("NOT fibonacci number");

  return 0;
}
