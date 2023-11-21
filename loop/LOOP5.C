#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=1;
	int fact=1;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);

	while(a<=n)
	{

	 fact*=a;
	a++;
	}
	printf("%d",fact);

	 getch();
}
