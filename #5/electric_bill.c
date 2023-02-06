#include<stdio.h>
#include<conio.h>

int main(){
	
	float power, time, unit_cost=23.81, total_cost;
	
	printf("Enter the number of power consuption per day (Watts[W]): ");
	scanf("%f", &power);
	
	printf("Enter the time appliance/s used per day (hours[h]): ");
	scanf("%f", &time);
	
	total_cost = ((power * (time*30)) / 1000) * unit_cost;
	
	printf("Total Cost = %f", total_cost);
	
	getch();
	return 0;
}
