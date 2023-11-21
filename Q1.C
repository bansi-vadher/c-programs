#include<stdio.h>                                                                    #include<stdio.h>
#include<conio.h>
 main()
{
	int a,sum=0,n;
	clrscr();

	printf("enter n:");
	scanf("%d",&n);

	for(a=1;a<=n;a++)
	{
	  sum+=a;
	}

	printf("sum:%d",sum);
getch();


}
