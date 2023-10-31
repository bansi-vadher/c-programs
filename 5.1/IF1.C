#include<stdio.h>
#include<conio.h>
main()
{
    int age;
    clrscr();

    printf("Enter your age:");
    scanf("%d",&age);

    if(age>=18)
    {
	printf("You can vote...");
    }
    else
    {
       printf("You can't vote...");
    }

    getch();



}