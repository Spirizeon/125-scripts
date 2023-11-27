#include <stdio.h>
#include <stdlib.h>
int main(){
  int *ptr = (int *)malloc(sizeof(int));
  if(ptr == NULL){
    printf("memory allocation through malloc failed\n");
  }  
  else{
    printf("memory allocation through malloc successful\n");
  }
  int *ptr2 = (int *)calloc(5,sizeof(int));
  if(ptr2 == NULL){
    printf("memory allocation through calloc failed\n");
  }
  else{
    printf("memory allocation through calloc successful\n");
  }
  ptr = realloc(ptr,sizeof(double));
  if(ptr == NULL){
    printf("memory reallocation of malloc failed\n");
  }
  else{
    printf("memory reallocation of malloc succeeded\n");
  }

  free(ptr);
  printf("malloc space freed\n");
  free(ptr2);
  printf("calloc space freed\n");
  return 0;
}
