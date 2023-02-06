#include <stdio.h>
#include <conio.h>
int main() {
    int num, max, count;

    printf("Enter the number of values: ");
    scanf("%d", &count);

    printf("Enter the first value: ");
    scanf("%d", &max);

    for (int i = 1; i < count; i++) {
        printf("Enter the next value: ");
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }

    printf("The maximum value is: %d\n", max);

    getch();
    return 0;
}
