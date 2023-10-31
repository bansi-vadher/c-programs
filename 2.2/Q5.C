// Write a Program to find the Perimeter of the circle.

#include <stdio.h>

int main() 
{
    float radius,perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    perimeter = 2 * 3.14* radius;

    printf("The perimeter of the circle is: %.2f", perimeter);
    return 0;
}