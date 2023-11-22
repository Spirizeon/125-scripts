#include <stdio.h>
int main(){
  int n,c=1;
  scanf("%d",&n);
  for(int i=0;i<=n;i++){
    for(int j=1;j<=i;j++){
      printf("%d ",c);
      c++;
    }
    printf("\n");
  }
    return 0;
}
