// Topic 9: Fundamentals of Input & Output Handling in C
// Practical #3: part(i)

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	
	// Q: Exponent of a given number
	
	int base, exp, result; // declare base and exp variable, & store the result  
	
	printf ("Enter a number: ");  
	scanf ("%d", &base); // get base from user  
	
	printf ("Enter the power: ");  
	scanf ("%d", &exp); // get exponent from user  
	  
	// use pow() function to pass the base and the exp value as arguments  
	result = pow(base, exp);  
	printf ("%d to the power of %d is = %d ", base, exp, result); 


	getch();
	return 0;
}

