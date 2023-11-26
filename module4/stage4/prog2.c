#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);

    //checks  
    if(n>=100){
      int l = n/100;
      n = n-(l*100);
      printf("100Rs notes: %d\n",l);
    }

    if(n>=50){
      int l = n/50; 
      n = n-(l*50); 
    
      printf("50Rs notes: %d\n",l);
    }
    
    if(n>=10){
      int l = n/10;
      n = n-(l*10);

      printf("10Rs notes: %d\n",l);
    }

  
    if(n>=5){
      int l = n/5;
      n = n-(l*5);

      printf("5Rs notes: %d\n",l);
    }
    
  
    if(n>=2){
      int l = n/2;
      n = n-(l*2);

      printf("2Rs notes: %d\n",l);
    }

  

    
    if(n>=1){ 
      printf("1Rs notes: %d\n",n);
    }
    return 0;
}
