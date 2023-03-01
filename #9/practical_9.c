#include<stdio.h>
#include<conio.h>

int main(){

	float a, m, F; // Declaring Variables
	
	printf("Enter the mass of the object: ");
	scanf("%f", &m); // Input: Mass of the object
	
	printf("Enter the Force of the object: ");
	scanf("%f", &F); // Input force applied on the object 
	
	a = F/m; // Farmulae to calculate accelaration
	
	printf("The accelaration of the object is: %.2f\n", a); // Print Accelaration to the console
	
	getch();
	return 0;
}