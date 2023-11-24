#include <stdio.h>

int main(){
  int n,counter=1;
  scanf("%d",&n);

  for(int i=1;i<=n;i++){
    for(int j=n;j>i;j--){
      printf(" ");
    }

    for(int j=1;j<=i;j++){
      printf("%d",counter);
      counter++;
    }

    for(int j=2;j<=i;j++){
      printf("%d",counter);
      counter++;
    }

        
    printf("\n");
    counter = 1; //reset
  }


  for(int i=1;i<=n;i++){
    for(int j=0;j<=i-1;j++){
      printf(" ");
    }

    for(int j=n;j>i;j--){
      printf("%d",counter);
      counter++;
    }

    for(int j=n;j>i+1;j--){
      printf("%d",counter);
      counter++;
    }

    printf("\n");
    counter = 1;//reset
  }
 
  
  
  return 0;
}
