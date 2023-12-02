#include <stdio.h>
#include <stdlib.h>
struct Student{
 struct Dateofbirth{
     int day;
     int month;
     int year;    
   }Dateofbirth;

  char name[50];
  int age;
  char roll[13];
  char branch[3];

};

int main(){
 struct Student student;

  printf("\nenter student name: ");
  scanf("%s",student.name);

  printf("\nenter student age: ");
  scanf("%d",&student.age);

  printf("\nenter student roll number(AP23XX...): ");
  scanf("%s",student.roll);

  printf("\nenter student branch: ");
  scanf("%s",student.branch);

  printf("\nenter student DOB (dd-mm-yy)");
  scanf("%d-%d-%d",&student.Dateofbirth.day,&student.Dateofbirth.month,&student.Dateofbirth.year);
  printf("\nname: %s\nage: %d\nroll number: %s\nbranch: %s\nDOB = %d/%d/%d\n",student.name,student.age,student.roll,student.branch,student.Dateofbirth.day,student.Dateofbirth.month,student.Dateofbirth.year);

  return 0;
}
