#include<stdio.h>
#include <conio.h>
int main(){
    int n1, n2, n3;

    printf("Enter three unequal numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3); // Input three unequal numbers


    // Check: is n1 is greater than n2 & n3
    if (n1 > n2 && n1 > n3) {
        printf("%d is greator", n1);
    }
    // Check: is n2 is greater than n1 & n3
    else if (n2 > n1 && n2 > n3) {
        printf("%d is greator", n2);
    }
    // Check: is n3 is greater than n1 & n2
    else if (n3 > n1 && n3 > n2) {
        printf("%d is greator", n3);
    }

    getch();
    return 0;
}