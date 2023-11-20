#include <stdio.h>

int main(){
  int i;
  scanf("%d",&i);
  
  while(i>=1){
    printf("%d\n",i);
    i = i-2;
  }
  return 0;
}
