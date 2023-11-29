#include <stdio.h>
#include <stdlib.h>

int main(){
  int n,sum=0;
  printf("enter array size: ");
  scanf("%d",&n);

  int* ptr = (int *)calloc(n,sizeof(int));
  for(int i=0;i<n;i++){
    if(i%2==0){
      *(ptr+i)=87;
    }
    else{
      *(ptr+i)=2;
    }
    sum+=(*(ptr+i));
  }
  printf("sum = %d",sum);
  free(ptr); ///VERY IMPORTANT
}
