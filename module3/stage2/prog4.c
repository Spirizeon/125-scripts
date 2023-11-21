#include <stdio.h>

int main(){
  int n,prod=1,r;
  scanf("%d",&n);
  scanf("%d",&r);
  while(r>0){
    prod*=n;
    r--;//step
  }
  printf("%d",prod);
  return 0;
}
