#include <stdio.h>

int factoria(int n){
  int fac=1;
  for(int i=1;i<=n;i++){
    fac*=i;
  }
  return fac;
}

int main(){
  int n,sum=0;
  scanf("%d",&n);

  int temp = n;
  while(temp>0){
    int l = temp % 10;
    sum+= factoria(l);
    temp /=10;
  }
  if(sum==n){
    printf("Strong Number");
  }
  else{
    printf("Not strong number");
  }
  return 0;
}
