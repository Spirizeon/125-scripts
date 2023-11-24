#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);

  for(int i=1;i<=n;i++){
    for(int j=n;j>=i;j--){
      printf(" ");
    }
    for(int k=1;k<=i;k++){
        //insert left update
        if(k==1){
          printf("*");
        }
        else{
          printf(" ");
        }
      }

    for(int m=2;m<=i;m++){
        //insert right update
        if(m==i){
          printf("*");
      }
        else{
          printf(" ");
      }
      }
    
    printf("\n");
  }

  for(int l=1;l<=(2*n+1);l++){
    printf("*");
  }

  
  return 0;
}
