#include <stdio.h>
int number,rev;
int main(){
    scanf("%d",&number);
    while(number>0){
        int l;
        l = number%10;
        rev=rev*10+l;
        number/=10;
    }
    printf("%d",rev);
  return 0;
}
