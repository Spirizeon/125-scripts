#include <stdio.h>

int main(){
  int n,temp;
  scanf("%d",&n);
  temp = n;
  for(int i=1;i<=n;i++){
    for(int j=n;j>=i;j--){
      printf("%d ",temp);
    }
    temp--;
    printf("\n");
  }
  return 0;
}
