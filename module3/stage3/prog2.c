#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  while(n>10){
    int temp = n;
    int sum = 0;
    while(temp>0){
      int l = temp%10;
      sum+=l;
      temp/=10;
    }
    if(sum<10){
      printf("%d",sum);
    }
    else{
      printf("%d->",sum);
    }
    n = sum;
  }
  return 0;
}
