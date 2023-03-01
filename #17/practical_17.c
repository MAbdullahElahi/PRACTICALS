#include<stdio.h>
#include <conio.h>

int main(){

   
    int obt_marks, tot_marks; // Declare Marks
    float percentage;

    printf("Enter the total marks: ");
    scanf("%d", &tot_marks); // Input Total Marks
    
    printf("Enter the obtained marks: ");
    scanf("%d", &obt_marks); // Input Obtained Marks
    
    
    // Calculate the percentage
    percentage = (obt_marks*100)/tot_marks;

    // Check for thr grade
    if (percentage >= 80) {
        printf("Percentage: %.2f%%\nGrade: A-1\n", percentage);
    }
    else if (percentage >= 70) {
        printf("Percentage: %.2f%%\nGrade: A\n", percentage);
    }
    else if (percentage >= 60) {
        printf("Percentage: %.2f%%\nGrade: B\n", percentage);
    }
    else if (percentage >= 50) {
        printf("Percentage: %.2f%%\nGrade: C\n", percentage);
    }
    else if (percentage >= 40) {
        printf("Percentage: %.2f%%\nGrade: D\n", percentage);
    }
    else if (percentage < 40 && percentage > 33.33) {
        printf("Percentage: %.2f%%\nGrade: E\n", percentage);
    }
    else if (percentage < 33.33) {
        printf("Percentage: %.2f%%\nGrade: F\n", percentage);
    }
    getch();
    return 0;
}