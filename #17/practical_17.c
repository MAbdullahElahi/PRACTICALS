#include<stdio.h>
#include <conio.h>
int main(){

    float percentage;

    printf("Enter your percentage(%%): ");
    scanf("%f", &percentage);

    if (percentage >= 80) {
        printf("Your grade on %f%% is A-1\n", percentage);
    }
    else if (percentage >= 70) {
        printf("Your grade on %f%% is A\n", percentage);
    }
    else if (percentage >= 60) {
        printf("Your grade on %f%% is B\n", percentage);
    }
    else if (percentage >= 50) {
        printf("Your grade on %f%% is C\n", percentage);
    }
    else if (percentage >= 40) {
        printf("Your grade on %f%% is D\n", percentage);
    }
    else if (percentage < 40 && percentage > 33.33) {
        printf("Your grade on %f%% is E\n", percentage);
    }
    else if (percentage < 33.33) {
        printf("Your grade on %f%% is F\n", percentage);
    }
    getch();
    return 0;
}