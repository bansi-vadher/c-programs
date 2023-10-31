#include <stdio.h>

int main() 
{
    int a, b;
    
    printf("Input: Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("\nAddition of %d and %d Ans %d", a, b, a + b);
    printf("\nSubtraction of %d and %d Ans %d", b, a, b - a);
    printf("\nMultiplication of %d and %d Ans %d", a, b, a * b);
    printf("\nDivision of %d and %d Ans %d", b, a, b / a);
    printf("\nModulus of %d and %d Ans %d", b, a, b % a);

    return 0;
}
