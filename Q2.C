#include<stdio.h>                                                                    #include<stdio.h>
#include<conio.h>
 main()
{
	int a,fact=1,n;
	clrscr();

	printf("enter n:");
	scanf("%d",&n);

	for(a=1;a<=n;a++)
	{
	  fact*=a;
	}

	printf("factorial:%d",fact);
getch();


}
