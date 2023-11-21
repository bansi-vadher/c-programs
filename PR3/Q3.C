#include<stdio.h>
#include<conio.h>
main()
{
	int a,ld,fd,sum=0;
	clrscr();

	printf("enter a:");
	scanf("%d",&a);

	ld=a%10;

	while(a>=10)
	{
	fd=a/10;
	a=a/10;

	}
	sum=ld+fd;

	printf("sum of first and last dijit:%d",sum);
	getch();


}