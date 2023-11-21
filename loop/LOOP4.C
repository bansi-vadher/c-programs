#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=1;
	int sum=0;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);

	while(a<=n)
	{

	 sum+=a;
	a++;
	}
	printf("%d",sum);

	 getch();
}
