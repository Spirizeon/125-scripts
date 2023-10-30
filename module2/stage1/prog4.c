#include <stdio.h>

int main(){
  int year;
  scanf("%d",&year);
  if(year%100==0){
    if (year%4){
      printf("Leap year");
    }
    else{
      printf("NOT leap year");
    }
  }
  else{
      if(year%4==0){
      printf("Leap year");
    }
    else{
      printf("NOT Leap year");
    }
  }
  return 0;
}
