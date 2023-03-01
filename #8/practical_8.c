#include<stdio.h>
// #include<conio.h>

int main() {
	
	float n1, n2, n3, n4, n5, sum, prod, avg;
	
	printf("Enter 5 values: \n");
	scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);
	
	sum = n1 + n2 + n3 + n4 + n5; 
	prod = n1 * n2 * n3 * n4 * n5; 
	avg = (n1 * n2 * n3 * n4 * n5)/5;
	
	printf("Sum of (%.2f + %.2f + %.2f + %.2f + %.2f) = %.2f\n", n1, n2, n3, n4, n5, sum);
	printf("Product of (%.2f x %.2f x %.2f x %.2f x %.2f) = %.2f\n", n1, n2, n3, n4, n5, prod);
	printf("Average of ((%.2f x %.2f x %.2f x %.2f x %.2f)/5) = %.2f\n", n1, n2, n3, n4, n5, avg);
	
	// getch();
	return 0;
}
