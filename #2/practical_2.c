#include <stdio.h>
#include<conio.h>

int main()
{

    /*
    area of triangle: a = (b x h) / 2
    area of parallelogram: a = (b x h)
    area of rhombus: a = (p x q) / 2
    area of trapezoid: a = ((c + d) / 2) * h
    */

    float b, h, p, q, c, d, tri, para, rhom, trape; /*
    Declaring Variables:
         b: base,
         h: height,
         p: 1st diagonal,
         q: 2nd diagonal,
         c: parallel side 1,
         d: parallel side 2,
    */

    printf("Enter base, height, diagonal, and parallel side values: \n");

    printf("Base: ");
    scanf("%f", &b); // Input base 

    printf("Height: ");
    scanf("%f", &h); // Input height

    printf("1st Diagonal: ");
    scanf("%f", &p); // Input 1st Diagonal

    printf("2nd Diagonal: ");
    scanf("%f", &q); // Input 2nd Diagonal

    printf("Prallel Side (1): ");
    scanf("%f", &c); // Input Prallel Side (1)

    printf("Prallel Side (2): ");
    scanf("%f", &d); // Input Prallel Side (2)
    

    tri = (b * h) / 2; // Farmulae to calculate area of triangle
    para = (b * h); // Farmulae to calculate area of parallelogram
    rhom = (p * q) / 2; // Farmulae to calculate area of rhombus
    trape = ((c + d) / 2) * h; // Farmulae to calculate area of trapezoid

     printf("\nArea of triangle is: %.2f\nArea of Parallelogram is: %.2f\nArea of Rhombus is: %.2f\nArea of Trapezoid is: %.2f\n", tri, para, rhom, trape); //print result to the screen


    getch();
    return 0;
}
