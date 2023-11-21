#include <stdio.h>

int main(){
  int b,e,c;
  scanf("%d",&b);
  scanf("%d",&e);
  for(int i=b;b<=i&&i<=e;i++){
    c = 0;
    for(int j=1;j<=i;j++){
      if(i%j==0){
        c++;
      }//if condition
    }// for loop
    if(c<=2){
      printf(" %d ",i);    
     }
  }
  
  return 0;
}
