#include <stdio.h>

int main(){

  int n,counter=0,digit;
  scanf("%d",&n);
  scanf("%d",&digit);
  while(n>0){
    int l = n%10;
    if(l==digit){counter++;}
    n /= 10;
  }
  (counter==0)?printf("number is absent"):printf("number is present and occurs %d number of times",counter);
  return 0;
}
