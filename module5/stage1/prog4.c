#include <stdio.h>

int main(){
  int disp[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("fill %d th row, %d th column: ",i,j);
      scanf("%d",&disp[i][j]);
    }
  }
  printf("\n matrix \n ==============\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d ",disp[i][j]);
    }
    printf("\n");
  }
  return 0;
}
