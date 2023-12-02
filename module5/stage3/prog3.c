#include <stdio.h>
struct complexer{
  int realpart;
  int ipart;
};

int main(){
  struct complexer num;
  printf("enter real part of number: ");
  scanf("%d",&num.realpart);
  printf("\nenter imaginary part of number: ");
  scanf("%d",&num.ipart);

  printf("here is your complex number: %d+%di",num.realpart,num.ipart);

  return 0;
}
