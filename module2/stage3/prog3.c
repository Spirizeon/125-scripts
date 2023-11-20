#include <stdio.h>

int main(){
  int i,d=0;//digits 0
  scanf("%d",&i);
  while(i!=0){
    i = i/10;
    d++;
  }
  printf("%d",d);
  return 0;
}
