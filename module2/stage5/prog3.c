#include <stdio.h>
#include <math.h>
int main(){
  int n,acc=0;
  scanf("%d",&n);
  int temp;
  temp = n;
  while(temp>0){
    int temp2 = temp % 10;
    acc += pow(temp2,3);
    temp = temp/10;
  }

  if(acc == n){
    printf("number is armstrong");
  }
  else{
    printf("number is not armstrong");
  }
  return 0;
}
