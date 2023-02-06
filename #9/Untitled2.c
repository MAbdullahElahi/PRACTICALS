#include<stdio.h>
#include<conio.h>

int main(){

	int a, m, F;
	
	printf("This programm finds the accelaration of moving objects!\n");
	
	printf("Enter the mass of the subject: ");
	scanf("%d", &m);
	
	printf("Enter the Force of the subject: ");
	scanf("%d", &F);
	
	a = F/m;
	
	printf("The accelaration of the object is: %d", a);
	

	getch();
	return 0;
}

