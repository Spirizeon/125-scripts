#include <stdio.h>

int tilter(int n,int c);
int main(){
  int n,counter=1,nstore;
  scanf("%d",&n);

  for(int i=1;i<=n;i++){
    for(int j=n;j>i;j--){
      printf(" ");
    }

    for(int j=1;j<=i;j++){
      printf("%d",counter);
      // counter++;
      counter = tilter(n,counter);
    }

    for(int j=2;j<=i;j++){
      printf("%d",counter);
      counter++;
    }

        
    printf("\n");
  }


  for(int i=1;i<=n;i++){
    for(int j=0;j<=i-1;j++){
      printf(" ");
    }

    for(int j=n;j>i;j--){
      printf("%d",counter);
      counter++;

    }

    for(int j=n;j>i+1;j--){
      printf("%d",counter);
      counter++;
    }
    printf("\n");
  }
 
  
  
  return 0;
}


int tilter(int n,int c){
  int rez;
  if(n%2==0){
    if(c<n/2){
      rez = c++;
    }
    else{
      rez = c--;
    }
  }
  else{
    if(c<n/2+1){
      rez = c++;
    }
    else{
      rez = c--;
    }
  }
  return rez;
}
