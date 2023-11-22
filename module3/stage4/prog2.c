#include <stdio.h>
int main(){
  int n,c=2;
  scanf("%d",&n);
  for(int i=0;i<=n;i++){
    for(int j=1;j<=i;j++){
      printf("%d ",c);
      c++;
      if(i>1){
        if(j==i){
          c--;
        }
      }
    }
    printf("\n");
  }

  return 0;
}
