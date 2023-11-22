#include <stdio.h>

int main(){
  int n,temp;
  scanf("%d",&n);
  temp = n+1;
  for(int i=0;i<=n;i++){
    for(int j=1;j<=i;j++){
      printf("%d ",temp);
    }
    temp--;
    printf("\n");
  }
  return 0;
}
