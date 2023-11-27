#include <stdio.h>

int main(){
  int disp[20];
  for(int i=0;i<=19;i++){
    printf("enter %d th array list value: ",i);
    scanf("%d",&disp[i]);
  }
  int oddcount=0,evencount=0;
  for(int i=0;i<=19;i++){
    if(disp[i]%2==0){
      evencount++;
    }
    else{
      oddcount++;
    }
  }
  printf("number of odd elements: %d\nnumber of even elements: %d\ntotal elements: %d",oddcount,evencount,oddcount+evencount);

  return 0;
}
