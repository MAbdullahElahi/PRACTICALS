#include<stdio.h>
#include<conio.h>


int main(){
    
    float C, F;
    int a;

    printf("Choose the option to enter the temperature: \n1. Celcius(1)\n2.Fahrenheit(2)\n\n");
    printf("Option: ");
    scanf("%d", &a);

    if (a==1){
        printf("Enter the temperature in Celcius: ");
        scanf("%f", &C);

        F = (1.8 * C) + 32;

        printf("The Fahrenheit value of %.2f° is %.2f°\n", C, F);

    }
    else if (a==2){
        printf("Enter the temperature in Fahrenheit: ");

        scanf("%f", &F);

        C = (F-32)/1.8;

        printf("The Celcius value of %.2f° is %.2f°\n", F, C);

    }
    else {
        printf("No such option for value %d", a);
    }
    

    getch();
    return 0;
}