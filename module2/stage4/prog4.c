#include <stdio.h>
int binr[100];
int main(){
  int argnum; //this is the input
  scanf("%d",&argnum);
  for(int i=0;argnum>=1;i++){
    printf("%d",argnum%2);
    argnum = argnum/2;
  }
  return 0;
}
