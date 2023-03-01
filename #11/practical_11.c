#include <stdio.h>
#include <conio.h>
int main() {
    int n1, n2, i, j, isPrime;

    printf("Enter the first number (n1): ");
    scanf("%d", &n1); // Input n1

    printf("Enter the second number (n2): ");
    scanf("%d", &n2); // Input n2

    for (i = n2; i <= n1; i++) {
        isPrime = 1; // Assume the current number is prime
        for (j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d is a prime number.\n", i);
        }
    }

    getch();
    return 0;
}
