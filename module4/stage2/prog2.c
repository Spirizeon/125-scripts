#include <stdio.h>

int main(){
  int n,temp;
  scanf("%d",&n);
  temp = n;
  for(int i=1;i<=n;i++){
    for(int j=n;j>=i;j--){
      printf(" ");
    }
    for(int k=1;k<=i;k++){
      printf("%d",temp);
      temp--;
    }
    temp++;
    for(int k=2;k<=i;k++){
          temp++;
          printf("%d",temp);
        }

    temp = n;
    printf("\n");
  }

  
  return 0;
}
