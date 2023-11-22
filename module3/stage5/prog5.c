#include <stdio.h>
int checkeven(int n){
  if(n%2==0){
    return 1;
  }
  else{
    return 0;
  }
}
int main(){
  int n,temp,counter=0;
  scanf("%d",&n);
  temp = 1;
  for(int i=1;i<=n;i++){
    for(int j=n;j>=i;j--){
      printf("%d ",temp);      
    }
    // temp++;
    counter++;
    if(n%2==0){
      //even
      if(counter>=(n/2)){
        temp--;
      }
      else{
        temp++;
      }
    }
    else{
      //odd
      if(counter>=(n/2 + 1)){
        temp--;
      }
      else{
        temp++;
      }
    }
    printf("\n");
  }
  return 0;
}
