#include <stdio.h>
// #include <conio.h>
int main() {
    int n1, n2, i; // Declaring Variables

    printf("Number 1(n1) should be greater than Number 2(n2)\n");

    printf("Enter the first number (n1): ");
    scanf("%d", &n1); // Input: First Number

    printf("Enter the second number (n2): ");
    scanf("%d", &n2); // Input: Second Number

    // Use for loop to iterate in n1 and n2
    for (i = n2; i <= n1; i++) {
        // Create an if condition, which calculate the remainder of i when it is divided by 2
        if (i % 2 == 0) { 
            printf("%d is an even number.\n", i); // The number is even and then print that number
        }
        else {
            printf("%d is not an even number.\n", i); // The number is not even number
        }
    }


    // getch();
    return 0;
}
