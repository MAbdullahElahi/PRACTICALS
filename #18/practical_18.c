#include <stdio.h>
#include <conio.h>
int main() {
    int n, i,x;
    
    printf("Enter the starting number: ");
    scanf("%d", &n); // Input starting number
    
    printf("Enter the last number: ");
    scanf("%d", &x);
    
    if (n % 2 == 0) { // If starting number is even, make it odd
        n++;
    }
    
    printf("Sequence of odd numbers starting from %d:\n", n);
    
    for (i = n; i <= x; i+=2) { // Print 20 odd numbers starting from n
        printf("%d ", i);
    }
    
    getch();
    return 0;
}
