#include <stdio.h>
void liners(){
  int i = 7;
  while(i>0){
    printf("*");
    i--;
  }
  printf("\n");
}
int main(){
  long int n;
  printf("Guide for recharge\n");
  liners();
  printf("[10] mobile number\n[12] DTH ID number\n[15] Broadband ID\n");
  liners();
  printf("enter recharge ID:");
  scanf("%ld",&n);
  
  int d=0;
  while(n>0){
    d++;
    n/=10;
  }
  liners();
  printf("output: ");
  if(d==10){
    printf("mobile");
  }
  else if(d==12){
    printf("DTH");
  }
  else if(d==15){
    printf("Internet");
  }
  else{
    printf("service not identified");
  }
  return 0;
}
