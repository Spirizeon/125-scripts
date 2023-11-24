#include <stdio.h>

int tilter(int n,int c);
int main(){
  int n,counter=5;
  scanf("%d",&n);
  
  for(int i=1;i<=n;i++){
    for(int j=n;j>i;j--){
      printf(" ");
    }

    for(int j=1;j<=i;j++){
      printf("%d",counter);
      // counter++;
      counter--;
    }
    counter--;
    for(int j=2;j<=i;j++){
      counter++;
      printf("%d",counter);
    }
  

    
    printf("\n");
    counter = n;
  }

  counter = n;
  for(int i=1;i<=n;i++){
    for(int j=0;j<=i-1;j++){
      printf(" ");
    }

    for(int j=n;j>i;j--){
      printf("%d",counter);
      counter--;
    }
    counter++;
    for(int j=n;j>i+1;j--){
      counter++;
      printf("%d",counter);
      
    }
    printf("\n");
    counter = n;
  }
 
  
  
  return 0;
}



