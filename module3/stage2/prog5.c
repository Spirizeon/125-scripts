#include <stdio.h>

int reversenum(int n){
  int temp,rev=0;
  temp = n;
  while(temp>0){
    int l = temp % 10;
    rev=rev*10+l;
    temp /= 10;
  }
  return rev;
}

void speller(int n){
  while(n>0){
    int l = n % 10;
    switch(l){
      case 1:
        printf(" one ");
        break;
      case 2:
        printf(" two ");
        break;
      case 3:
        printf(" three ");
        break;
      case 4:
        printf(" four ");
        break;
      case 5:
        printf(" five ");
        break;
      case 6:
        printf(" six ");
        break;
      case 7:
        printf(" seven ");
        break;
      case 8:
        printf(" eight ");
        break;
      case 9:
        printf(" nine ");
        break;
      case 0:
        printf(" zero ");
        break;
      }  
    n /= 10;
  }
}

int main(){
  int n;
  scanf("%6d",&n);
  speller(reversenum(n));  
  return 0;
}
