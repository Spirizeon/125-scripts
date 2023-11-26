#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

void generateTwinPrimes(int start, int end) {
    printf("Twin prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end - 2; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            printf("(%d, %d)\n", i, i + 2);
        }
    }
}

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    generateTwinPrimes(start, end);

    return 0;
}

