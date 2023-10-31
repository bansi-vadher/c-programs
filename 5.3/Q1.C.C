#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();

	printf("Enter Any a :");
	scanf("%d",&a);
	printf("Enter Any b :");
	scanf("%d",&b);
	printf("Enter Any c :");
	scanf("%d",&c);

	(a>b)
	?
		(a>c)
		   ? printf("a is big!")
		   : printf("c is big")

	:
		 (b>c)
		   ? printf("b is big!")
		   : printf("c is big");



	getch();
}