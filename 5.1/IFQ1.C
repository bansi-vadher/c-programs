#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,min;
    clrscr();

    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);


    if(a>b)
    {
	min=b;
	printf("minimum value is %d",min);
    }
    else
    {
      min=a;
      printf("minimum value is %d",min);
    }

    getch();



}