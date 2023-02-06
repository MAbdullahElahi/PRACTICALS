#include<stdio.h>
#include<conio.h>

int main() {
	
	int n1, n2, n3, n4, n5, sum, prod, avg;
	
	printf("Enter 5 values: \n");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	
	sum = n1 + n2 + n3 + n4 + n5; 
	prod = n1 * n2 * n3 * n4 * n5; 
	avg = (n1 * n2 * n3 * n4 * n5)/5;
	
	printf("Sum of (%d + %d + %d + %d + %d) = %d\n", n1, n2, n3, n4, n5, sum);
	printf("Product of (%d x %d x %d x %d x %d) = %d\n", n1, n2, n3, n4, n5, prod);
	printf("Average of ((%d x %d x %d x %d x %d)/5) = %d\n", n1, n2, n3, n4, n5, avg);
	
	getch();
	return 0;
}
