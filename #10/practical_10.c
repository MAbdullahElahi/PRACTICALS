#include <stdio.h>
#include <conio.h>
int main() {
    int n1, n2, i;

    printf("Enter the first number (n1): ");
    scanf("%d", &n1);
    printf("Enter the second number (n2): ");
    scanf("%d", &n2);

    for (i = n2; i <= n1; i++) {
        if (i % 2 == 0) {
            printf("%d is an even number.\n", i);
        }
        else {
            printf("%d is not an even number.\n", i);
        }
    }


    getch();
    return 0;
}
