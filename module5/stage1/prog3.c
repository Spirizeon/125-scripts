#include <stdio.h>

int main(){
  int disp[20];
  int rev[20];
  for(int i=1;i<=20;i++){
    // printf("enter element: ");
    scanf("%d",&disp[i-1]);
    rev[20-i] = disp[i-1];
  }
  printf("reversed array: ");
  for(int i=0;i<=19;i++){
    printf("%d,",rev[i]);
  }
  return 0;
}
