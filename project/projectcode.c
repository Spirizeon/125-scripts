#include <stdio.h>
#include <stdlib.h>
/*
PSEUDOCODE
=================================
1. Prompt user to enter the size of the sequence.
2. Allocate memory for an array 'occurrences' to store the count of each ID's occurrences.
3. Initialize all elements of 'occurrences' array to zero.
4. Prompt user to enter the sequence of IDs.
5. Loop through the sequence and update the occurrences array accordingly.
6. Initialize a variable 'found' to 0 to track if a person with an odd occurrence is found.
7. Iterate through the occurrences array and check for IDs with odd occurrences.
8. If found, print the ID of the person inside the room and set 'found' to 1.
9. If no person is found, print a message indicating that no one is inside the room.
10. Free the allocated memory for the 'occurrences' array.
11. Return 0 to indicate successful execution.
=================================
*/
int main() {
    int size;
    printf("enter sequence: ");
    scanf("%d", &size);

    // Array to represent occurrences of numbers
    int *occurrences = (int *)malloc((size + 1) * sizeof(int));

    // Initialize occurrences array
    printf("\ninitialising occurence arrays...");
    for (int i = 0; i <= size; ++i) {
        occurrences[i] = 0;
    }

    // Process the sequence

    for (int i = 0; i < size; ++i) {
        int id;
        scanf("%d", &id);

        occurrences[id]++;
    }

    // Check if there is any person inside the room
    int found = 0;
    for (int i = 0; i <= size; ++i) {
        if (occurrences[i] % 2 != 0) {
            // Person with odd occurrence found
            printf("\nperson with ID %d is inside the room!", i);
            found = 1;
            break;
        }
    }

    // If no person found inside the room
    if (!found) {
        printf("\n-1");
        printf("\nNobody is inside the room!");
    }

    free(occurrences);
    return 0;
}
// This project was made by Ayush Dutta (AP23110011131) && Mourjo Basu (AP23110011139)
