
 // C program to convert temperature from degree celsius to fahrenheit
 //fahrnheit=(celsius*9/5)+32

#include <stdio.h>

 int main()
{
    float celsius, fahrenheit;

    printf("enter temperature in celsius: ");
    scanf("%f", &celsius);


    fahrenheit = (celsius * 9 / 5) + 32;

    printf("temperature in fahrenheit:%2.f", fahrenheit);

    return 0;
}