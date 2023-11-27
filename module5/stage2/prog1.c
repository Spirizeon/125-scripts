#include <stdio.h>
int factoria(int n){
  int prod = 1;
  for(int i=1;i<=n;i++){
    prod*=i;
  }
  return prod;
}


int permute(int n,int r){
  int perm = factoria(n)/factoria(n-r);
  return perm;
}
int combute(int n,int r){
  int comb = factoria(n)/((factoria(n-r))*factoria(r));
  return comb;
}


int main(){
  int n,r;
  scanf("%d",&n);
  scanf("%d",&r);
  printf("permutation: %d\n",permute(n,r));
  printf("combination: %d",combute(n,r));
  return 0;
}
