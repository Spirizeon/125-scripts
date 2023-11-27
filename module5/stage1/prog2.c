#include <stdio.h>

int main(){
  int disp[20];
  
  for(int i=0;i<=19;i++){
    printf("enter %d th value of array: ",i);
    scanf("%d",&disp[i]);
  }
  int max=disp[0],min=disp[0];
  for(int i=1;i<=19;i++){
    if(disp[i]>max){
      max = disp[i];
    }
    if(disp[i]<min){
      min = disp[i];
    }
  }
  printf("\nmax: %d\n",max);
  printf("min: %d\n",min);

  int temp;
  
  for(int i=0;i<=19;i++){
    if(disp[i]==max){
      disp[i]=min;
    }
    else if(disp[i]==min){
      disp[i]=max;
    }
  }
  printf("interchanged array: \n");
  for(int i=0;i<=19;i++){
    printf(" %d,",disp[i]);
  }
  return 0;
}
