
//multipication table
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=1;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);

	while(a<=10)
	{

	 printf("%d*%d=%d\n",n,a,n*a);
	a++;
	}


	 getch();
}
