#include<stdio.h>
#include <conio.h>
int main(){
    int n1, n2, n3;

    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    printf("Enter third number: ");
    scanf("%d", &n3);


    if (n1 > n2 && n1 > n3) {
        printf("%d is greator", n1);
    }
    else if (n2 > n1 && n2 > n3) {
        printf("%d is greator", n2);
    }
    else if (n3 > n1 && n3 > n2) {
        printf("%d is greator", n3);
    }

    getch();
    return 0;
}