#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    for(int j=1;j<=i;j++){
      printf(" ");
    }

    for(int k=n;k>i;k--){
      printf("*");
    }

    for(int l=n-1;l>i;l--){
      printf("*");
    }

    printf("\n");
  }  
  return 0;
}
