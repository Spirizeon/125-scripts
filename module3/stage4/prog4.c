#include <stdio.h>

int main(){
  int n,temp;
  temp = n;
  scanf("%d",&n);
  for(int i=0;i<=n;i++){
    for(int j=1;j<=i;j++){
      printf("%d ",temp);
      temp--;
    }
    temp = n;
    printf("\n");
  }
  return 0;
}
