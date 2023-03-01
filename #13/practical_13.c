#include <stdio.h>
#include <conio.h>
int main() {
    int num, max, count; //Declare Vars

    printf("Enter the number of values: ");
    scanf("%d", &count); // Input: Number of values

    printf("Enter the first value: ");
    scanf("%d", &max); // Input: Maximum Value

    for (int i = 1; i < count; i++) {
        printf("Enter the next value: ");
        scanf("%d", &num);
        if (num > max) {
            max = num; // Make max equal to num, if num is greater than max
        }
    }

    printf("The maximum value is: %d\n", max); //Print to console

    getch();
    return 0;
}
