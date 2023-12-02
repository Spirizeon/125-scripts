#include <stdio.h>
#include <stdlib.h>

struct Student {
    struct DateOfBirth {
        int day;
        int month;
        int year;
    };

    char name[50];
    int age;
    char roll[13];
    char branch[3];
};

int main() {
    struct Student student;
    printf("\nenter student age: ");
    scanf("%d", &student.age);

    printf("\n enter student roll number(AP23XX...): ");
    scanf("%s", student.roll);

    printf("\nenter student branch: ");
    scanf("%s", student.branch);

    printf("\nenter student DOB (dd-mm-yy)");
    scanf("%d-%d-%d", &student.dateofbirth.day, &student.dateofbirth.month, &student.dateofbirth.year);
    printf("\nname: %s\nage: %d\nroll number: %s\nbranch: %s\n DOB = %d/%d/%d\n", student.name, student.age, student.roll, student.branch, student.dateofbirth.day, student.dateofbirth.month, student.dateofbirth.year);

    return 0;
}

