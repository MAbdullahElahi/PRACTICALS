#include <stdio.h>
#include <conio.h>
int main() {
    int start, i, n, choice; // Declare Variables

    printf("Enter the starting number: ");
    scanf("%d", &start); // Input: String Number

    printf("Enter the number of terms: ");
    scanf("%d", &n); // Input how much time the loop will run

    printf("Enter 1 for even numbers or 2 for odd numbers: ");
    scanf("%d", &choice); // Input: choice for even or odd number

    // Check for the choice
    if (choice == 1) { 
        // Check if the number is odd
        if (start % 2 != 0) { 
            start++;
        }
        for (i = 0; i < n; i++) {
            printf("%d\n", start);
            start += 2;
        }
    } 
    // Check for the choice
    else if (choice == 2) {
        // Check if the number is even
        if (start % 2 == 0) {
            start++;
        }
        for (i = 0; i < n; i++) {
            printf("%d\n", start);
            start += 2;
        }
    }
    // If the choice is nor 1 or 2 then run the following else
    else {
        printf("Invalid choice.");
    }

    getch();
    return 0;
}
