#include <stdio.h>
#include <conio.h>
int main() {
    int num, min, count; //Declare Vars

    printf("Enter the number of values: ");
    scanf("%d", &count); // Input: Number of values

    printf("Enter the first value: ");
    scanf("%d", &min); // Input: Maximum Value

    for (int i = 1; i < count; i++) {
        printf("Enter the next value: ");
        scanf("%d", &num);
        if (num < min) {
            min = num; // Make max equal to num, if num is greater than max
        }
    }

    printf("The minimum value is: %d\n", min); // Print to console

    getch();
    return 0;
}


