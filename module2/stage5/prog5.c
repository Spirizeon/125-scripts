#include <stdio.h>

int main(){
  int n,c;
  scanf("%d",&n);
  if(n==2){
    printf("prime");
  }
  else{
    for(int i=1;i<=n;i++){
      if(n%i==0){
        c++;
      }
    }
    if(c>2){
        printf("not prime");
      }
    else{
        printf("prime");
      }
  }
  return 0;
}