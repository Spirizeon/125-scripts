#include <stdio.h>

int main(){
  int a;
  scanf("%d",&a);
  if (a>0){
    printf("positive");
  }
  else if(a<0){
    printf("negeative");
  }
  else{
    printf("number is zero");
  }
  return 0;
}
