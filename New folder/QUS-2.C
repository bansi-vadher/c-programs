#include<stdio.h>
#include<conio.h>
main()
{
	int n,vote;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);
	printf("you have vote:");
	scanf("%d",&vote);
	printf("you do not have vote:");
	scanf("%d",&vote);
	if(0<18)
	{
		printf("you have vote!!");

	}
	else if(0>18)
	{
		printf("you do not have vote!!");

	}
	getch();
	}