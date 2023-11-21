#include <stdio.h>
#include <math.h>
int main(){
  int n,sum=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    if(i%3==0){
      sum+=pow(i,3);
    }
  }
  printf("sum is %d",sum);
  return 0;
}
