#include <stdio.h>

void reporter(int score,int total){
  if(score >= 85){
    printf("grade=A");
  }
  else if(score < 85 && score >=70){
    printf("grade=B");
  }
  else if(score <70 && score >=55){
    printf("grade=C");
  }
  else if(score <55 && score>=40){
    printf("grade=D");
  }
  else if(score<40){
    printf("grade=F");
  }
  printf("\n");
  float percent = ((float) score/total) * 100;
  printf("marks percentage: %f",percent);
  printf("\n");
  
}

int main(){
  int marks1,marks2,marks3,marks4;
  scanf("%d",&marks1);
  scanf("%d",&marks2);
  scanf("%d",&marks3);  
  scanf("%d",&marks4);
  int totalm = marks1+marks2+marks3+marks4;
  printf("Subject1\n");
  reporter(marks1,totalm);
  printf("Subject2\n");
  reporter(marks2,totalm);
  printf("Subject3\n");
  reporter(marks3,totalm);
  printf("Subject4\n");
  reporter(marks4,totalm);
  return 0;
}
