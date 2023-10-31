#include<stdio.h>
#include<conio.h>
main()
{
    int num;
    clrscr();

    printf("Enter your num:");
    scanf("%d",&num);


    if(num<0)
     {
	printf("This number is negative..");
     }
     else if(num>0)
     {
       printf("This number is positive..");
     }
    else
     {
     printf("This number is natural..");
     }

    getch();



}