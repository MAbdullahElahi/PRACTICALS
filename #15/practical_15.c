#include<stdio.h>
#include <conio.h>
int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);


    if (num % 2 == 0) {
        printf("%d is a prime number", num);
    }
    else {
        printf("%d is not a prime number", num);
    }
    getch();
    return 0;
}