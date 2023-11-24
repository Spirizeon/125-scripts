#include <stdio.h>

int main(){
  int n,temp,counter;
  scanf("%d",&n);

  temp =n;
  counter=n;

  //SPACE loop
  for(int i=1;i<=n;i++){

    for(int j=n;j>=i;j--){
      printf(" ");
    }

 //end of space loop

    //numbers loop
    for(int j=0;j<i;j++){
      printf("%d",temp);
      if(temp!=n){
        temp++;
      }
          }
    counter--;
    temp = counter;
    printf("\n");
  }
    //end of numbers loop


  //mid section
  for(int k=0;k<=n;k++){
    printf("%d",k);
  }
  printf("\n");
  //end of mid section


  //numbers loop reverse
  temp = 1;
  counter = 1;
  for(int k=1;k<=n;k++){
    for(int l=1;l<=k;l++){
      printf(" ");
    }
    
    for(int k=0;k<n;k++){
      printf("%d",temp);
      if(temp!=n){
        temp++;
      }  
      else{
        break;
      }
    }

    counter++;
    temp = counter;
    printf("\n");

  }
  return 0;
}
