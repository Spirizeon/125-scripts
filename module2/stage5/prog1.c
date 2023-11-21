#include <stdio.h>

int main(){
  int n,r;
  scanf("%d",&n);
  scanf("%d",&r);

  int permer(int n){
    int rez = 1;
    int ntemp = n;
    while(ntemp>=1){
      rez = rez*ntemp;
      ntemp--;
    }
    int result = rez;  
    return result;
  }

  int nfac = permer(n);
  int rfac = permer(r);
  int permutation =nfac/permer(n-r);
  printf("here is the result %d",permutation);
  return 0;
}
