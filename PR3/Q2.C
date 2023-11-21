#include<stdio.h>
#include<conio.h>
main()
{
	int a,c=0;
	clrscr();

	printf("enter a:");
	scanf("%d",&a);

	while(a!=0)
	{
	a=a/10;
	c++;

	}
       printf("%d",c);
	getch();


}