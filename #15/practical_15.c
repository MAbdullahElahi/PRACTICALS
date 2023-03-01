#include<stdio.h>
#include <conio.h>

int main(){
    int num; //Create var ----> "num"

    printf("Enter a number: ");
    scanf("%d", &num); // Input: Num


    // Check wether it is prime or not
    if (num % 2 == 0) { 
        printf("%d is a prime number", num);
    }
    // if not
    else {
        printf("%d is not a prime number", num);
    }
    getch();
    return 0;
}