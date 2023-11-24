#include <stdio.h>

int main(){
  int n;
  int ch = 'A';
  scanf("%d",&n);

  for(int i=1;i<=n;i++){
    for(int j=n;j>i;j--){
      printf("  ");
    }
    for(int k=1;k<=i;k++){
      printf(" %c",ch);
    }
    ch++;
    printf("\n");
  }

  
  return 0;
}
