#include <stdio.h>
int main(){
  int c1,c2,rs=0;
  scanf("%d %d",&c1,&c2);

  while(c1>0){
    if((c1%2)==1){
      rs+=c2;
    }
    c1/=2;
    c2*=2;
  }
  printf("%d",rs);
  return 0;
}
