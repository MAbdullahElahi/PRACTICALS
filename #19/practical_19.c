#include <stdio.h>
#include <conio.h>
int main(){
    
    int number, n; // Declare Vars

    printf("Enter a number to print it's multiplication table: ");
    scanf("%d", &number); // Input: Number 

    printf("Enter the last number to multiply %d with it: ", number);
    scanf("%d", &n); // Input: how much long the table would be

    for (int i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", number, i, number*i); 
    }

    getch();
    return 0;
}