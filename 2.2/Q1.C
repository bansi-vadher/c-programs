//write a program to find the area of a circle.
#include <stdio.h>

int main()
 {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = 3.14 * radius * radius;

    printf("The area of the circle is: %.2f", area);
    return 0;
}
