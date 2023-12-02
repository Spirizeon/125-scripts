#include <stdio.h>

struct student{
  char name[50];
  int age;
  char roll[13];
  char branch[3];
};

  
int main(){
  struct student profile;
  printf("enter student name: ");
  scanf("%s",profile.name);



  printf("\nenter student age: ");
  scanf("%d",&profile.age);

  printf("\n enter student roll number(AP23XX...): ");
  scanf("%s",profile.roll);

  printf("\nenter student branch: ");
  scanf("%s",profile.branch);

  printf("\nSTUDENT PROFILE\nname: %s\nage: %d\nroll: %s\nbranch: %s",profile.name,profile.age,profile.roll,profile.branch);



  return 0;
}
