#include <stdio.h>
#include <conio.h>
int main() {
    int n1, n2, k, i; // Declare Vars

    printf("Enter the first number (n1): ");
    scanf("%d", &n1); // Input N1

    printf("Enter the second number (n2): ");
    scanf("%d", &n2); // Input N2

    printf("Enter the number (k) to find multiples of: ");
    scanf("%d", &k); // Input:(k) the number to find the multiple of

    for (i = n2; i <= n1; i++) {
        if (i % k == 0) {
            printf("%d is a multiple of %d.\n", i, k);
        }
    }
    getch();
    return 0;
}
