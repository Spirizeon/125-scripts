#include <stdio.h>
int digitreversal(int n){
  int rev=0;
  while(n>0){
    int l = n%10;
    rev = rev*10 + l;
    n /= 10;
  }//while loop

  return rev;//reversed number
}


int main(){
  int n; //input
  scanf("%d",&n);

  n==digitreversal(n)?printf("palindrome"):printf("NOT palindrome");
  return 0;
}
