#include<stdio.h>
#include<conio.h>

int main(){
    
    /*
    volume of cube: v = l*l*l
    volume of cylinder: v = pie x r^2 x h
    volume of sphere: v = (4/3) x pie x r^r^r
    */

    int r,h,a,cylinder,cube; // Declaring Variables
    float r1,sphere; // Declaring Variables

    printf("Enter radius and height of a cylinder: ");
    scanf("%d%d", &r, &h); // Inputing height and radius of cylinder

    printf("Enter side of a cube: ");
    scanf("%d",&a); // Inputing side of a cube

    printf("Enter radius of a sphere: ");
    scanf("%f",&r1); // Inputing radius of sphere

    cube=a*a*a; // farmulae to calculate volume of the cube
    cylinder=3.14*r*r*h; // farmulae to calculate volume of the cylinder
    sphere=(4*3.14*r1*r1*r1)/3; // farmulae to calculate volume of the sphere

    printf("\nvolume of cube is: %d\n",cube);
    printf("\nvolume of sphere is: %f\n",sphere);
    printf("\nvolume of cylinder is: %d\n",cylinder);

    getch();
    return 0;
}