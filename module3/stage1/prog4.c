#include <stdio.h>
int prime(){
  int c=0;
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    if(n%i==0){
      c++;
    }
  }
  if(c<=2){
    printf("prime");
  }
  else{
    printf("not prime");
  }
}

int even(){
  int n;
  scanf("%d",&n);
  if(n%2==0){
    printf("even");
  }
  else{
    printf("odd");
  }
}

int palin(){
  int n;
  scanf("%d",&n);
  int temp = n,rev=0;
  while(temp>0){
    int temp2 = temp2%10;
    rev=rev*10 + temp;
    temp /= 10;
  }
  if(rev==n){
    printf("palindrome");
  }
  else{
    printf("not a palindrome");
  }
}

int main(){
  int conf=0,choice;
  do{
    printf("\ntype 1 for checking prime number\n");
    printf("type 2 for checking even number\n");
    printf("type 3 for checking palindrome number\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:
        prime();
        break;
      case 2:
        even();
        break;
      case 3:
        palin();
        break;
      }
      printf("continue?\npress 0 for yes\npress 1 for no\n");
      scanf("%d",&conf);
    }while(conf==0);
  return 0;
}
