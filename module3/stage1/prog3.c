#include <stdio.h>
#include <math.h>
int arm(int n){
  int rev=0;
  int temp = n;
  int temp2 = temp;
  int digits=0;
  while(temp2 > 0){
    int l = temp%10;
    digits++;
    temp2 /=10;
  }
  while(temp>0){
    int l = temp%10;
    rev+=pow(l,temp2);
    temp /= 10;
  }
  if(rev==n){
    return 0;
  }
  else{
    return 1;
  }
}


int main(){
  int n1,n2;
  scanf("%d",&n1);
  scanf("%d",&n2);
  for(int i=n1;i<=n2;i++){
    if(arm(i)==0){
      printf(" %d ",i);
    }
  }
  return 0;
}
