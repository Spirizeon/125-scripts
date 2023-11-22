#include <stdio.h>

int main(){
  int n,temp;
  scanf("%d",&n);
  temp = 1;
  for(int i=1;i<=n;i++){
    for(int j=n;j>=i;j--){
      printf("%d ",temp);
      temp++;
    }
    temp = 1;
    printf("\n");
  }
  return 0;
}
