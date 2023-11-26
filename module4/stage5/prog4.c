#include <stdio.h>

int main(){
  int distance;
  scanf("%d",&distance);
    for(int j=5;j>=1;j--){
        if(distance%j==0){
          printf("minimum steps: %d",distance/j);
        break;
      }
    
    }
  return 0;
}
