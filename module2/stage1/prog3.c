#include <stdio.h>

int main() {
    int number;
    printf("Enter a positive number: ");
    scanf("%d", &number);
    while (number >= 2) {
        number -= 2;
    }
    if (number == 0) {
        printf("even number.\n");
    } else {
        printf("odd number.\n");
    }

    return 0;
}

