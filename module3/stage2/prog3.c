#include <stdio.h>

int main(){
  int n,evsum=0,oddprod=1;
  scanf("%6d",&n);
  int temp=n;
  while(temp>0){
    int l = temp%10;
    if(l%2==0){
      evsum+=l;
    }    
    else{
      oddprod*=l;
    }
    temp /= 10;
  }
  printf("sum of all even digits: %d\nproduct of all odd digits: %d",evsum,oddprod);
  return 0;
}

