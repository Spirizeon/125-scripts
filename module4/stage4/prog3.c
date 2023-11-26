#include <stdio.h>
int diffcheck(int n){
  int l,count=0;
  l = n%10;
  n /=10;
  while(n>0){
    if(l==n%10){
      return 1;
    }
    else{
      l = n%10;
      n/=10;
    }
  }
  return 0;

}

int main(){
  int m,p;
  for(int i=100;i<1000;i++){
      m = 2*i;
      p = 3*i;
      if(m<1000){
        if(p<1000){
          if(diffcheck(i)==0 && diffcheck(m)==0 && diffcheck(p)==0){
        printf("%d %d %d",i,m,p);
        printf("\n");      
          }
          }
      }
    }   
return 0;
}

