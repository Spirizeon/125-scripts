#include <stdio.h>

int main(){
  int x,y;
  scanf("%d",&x);
  scanf("%d",&y);

  if(x>=0){
    if(y>=0){
      printf("1st quadrant");
    }
    else{
      printf("4th quadrant");
    }
  }
  else{
    if(y>=0){
      printf("2nd quadrant");
    }
    else{
      printf("3rd quadrant");
    }
  }
  return 0;
}
