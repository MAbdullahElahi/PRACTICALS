#include <stdio.h>
#include <conio.h>
int main() {
    int start, i, n, choice;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Enter 1 for even numbers or 2 for odd numbers: ");
    scanf("%d", &choice);

    if (choice == 1) {
        if (start % 2 != 0) {
            start++;
        }
        for (i = 0; i < n; i++) {
            printf("%d\n", start);
            start += 2;
        }
    } 
    else if (choice == 2) {
        if (start % 2 == 0) {
            start++;
        }
        for (i = 0; i < n; i++) {
            printf("%d\n", start);
            start += 2;
        }
    }
    else {
        printf("Invalid choice.");
    }
    getch();
    return 0;
}
