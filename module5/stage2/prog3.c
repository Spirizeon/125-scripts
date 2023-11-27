#include <stdio.h>
int deref(int n){
  n++;
}

int deref2(int* ptr){
  (*ptr)++;
}

int main(){
  int n;
  scanf("%d",&n);
  int* ptr = &n;
  deref(n);
  printf("variable without dereferencing: %d\n",n);
  deref2(ptr);
  printf("variable with dereferencing: %d",*ptr);  

  return 0;
}
