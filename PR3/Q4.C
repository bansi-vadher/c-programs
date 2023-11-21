#include<stdio.h>
#include<conio.h>
main()
{
	int a,mul=1,sum=0,r;
	clrscr();

	printf("enter a:");
	scanf("%d",&a);

	while(a!=0)
	{
	r=a%10;
	sum+=r;
	mul*=r;

	a=a/10;
	}

	if(sum==mul)
	{
	  printf(" this is magic number");
	}
	else
	{
	  printf("!not magic number... ");
	}
	getch();


}