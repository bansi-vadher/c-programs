
#include <stdio.h>


 int main()
{
    int a, b, c;
    

    printf("first angle of triangle: ");
    scanf("%d", &a);
     printf("second angle of triangle: ");
    scanf("%d", &b);

    c = 180 - (a + b);

    printf("Third angle of the triangle : %d", c);

    return 0;

}