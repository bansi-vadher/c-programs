//write a program to find a simple interest.
#include <stdio.h>
#include<conio.h>

int main()
 {

    float principal, rate, time,simpleinterest;
    printf("Enter the value of  principal : ");
    scanf("%f", &principal);
    printf("Enter the value of  rate: ");
    scanf("%f", &rate);
    printf("Enter the value of time : ");
    scanf("%f", &time);

     simpleinterest = (principal * rate * time) / 100;

    printf("The Simple Interest is: %.2f", simpleinterest);
    getch();
}

