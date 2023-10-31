//WRITE A PROGRAM TO FIND THE AREA OF  A TRINGLE.
#include <stdio.h>

int main() 
{
    float base, height,area;
    printf("Enter the base  of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height  of the triangle: ");
    scanf("%f", &height);
    

     area = 0.5 * base * height;

    printf("The area of the triangle is: %.2f", area);
    return 0;
}
