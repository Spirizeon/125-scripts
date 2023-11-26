#include <stdio.h>
#include <math.h>

int main(){
  int x;
  scanf("%d",&x);

  int sumA=0,diff=0,rez = 1;
  int sumB=0,ele=0;
  int sumC=0,eleC=1;
  float sumD = 0,eleD;
  for(int i=1;i<=x;i++){
    //A
     rez = rez + diff;
     diff++; 
     sumA = sumA + rez;

    //B
    ele = ele*10 + 1;
    sumB+=ele;


    //C    
    eleC = pow(x,i);
    sumC +=eleC;


    //D
    eleD = (float) 1/pow(x,i);
    if(i%2==0){
      sumD-=eleD;
    }
    else{
      sumD +=eleD;
    }
  }

  printf("progression A\n");
  printf("%d",sumA);
  printf("\nprogression B\n");
  printf("%d",sumB);
  printf("\nprogression C\n");
  printf("%d",sumC);
  printf("\nprogression D\n");
  printf("%f",sumD);
  return 0;
}
