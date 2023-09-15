#include<stdio.h>
#include<conio.h>

void main()
{

	int a,b;
	clrscr();

	printf("Enter a value of a :");
	scanf("%d",&a);
	printf("Enter a value of b :");
	scanf("%d",&b);


	if(a<b)
	{

		printf("The minimum value is : %d",a);

	}
	else
	{
		printf("The minimum value is : %d",b);

	}

	getch();
}