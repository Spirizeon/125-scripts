#include <stdio.h>
int binr[10];
int i = -1;
int main(){
  int basenum;
  scanf("%d",&basenum);
  for(basenum;basenum>=1;basenum/=2){
    binr[i] = basenum%2;
    i--;
  }
  for(int j=0;j<=9;j++){
    printf("%d",binr[j]);
  }
  return 0;
}
