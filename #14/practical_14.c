#include <stdio.h>
#include <conio.h>
int main() {
    int num, min, count;

    printf("Enter the number of values: ");
    scanf("%d", &count);

    printf("Enter the first value: ");
    scanf("%d", &min);

    for (int i = 1; i < count; i++) {
        printf("Enter the next value: ");
        scanf("%d", &num);
        if (num < min) {
            min = num;
        }
    }

    printf("The minimum value is: %d\n", min);

    getch();
    return 0;
}
