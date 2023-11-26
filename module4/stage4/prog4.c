#include <stdio.h>

int main() {
    int limit = 50;

    printf("Pythagorean triplets less than 50:\n");

    for (int x = 1; x < limit; x++) {
        for (int y = x + 1; y < limit; y++) {
            int z = x * x + y * y;
            int sqrt_z = 1;  // Initialize to a non-zero value

            // Check if z is a perfect square
            while (sqrt_z * sqrt_z < z) {
                sqrt_z++;
            }

            // If z is a perfect square and less than the limit, print the triplet
            if (sqrt_z * sqrt_z == z && z < limit) {
                printf("(%d, %d, %d)\n", x, y, sqrt_z);
            }
        }
    }

    return 0;
}

