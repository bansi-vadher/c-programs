//write a program to find the area of a rectangle.
#include <stdio.h>

int main() 
{
    float length, width,area;
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of rectangle: ");
    scanf("%f", &width);

    area = length * width;

    printf("The area of the rectangle is: %.2f", area);
    return 0;
}
