
#include<stdio.h>                                                                                      #include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();

	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	printf("Enter d :");
	scanf("%d",&c);

	if(a>b)
	{
	    if(a>c)
	    {
		if(a>d)
		{
		printf("a is big");
		}
		else
		{
		printf("d is big");
		}
	    }
	    else
	    {
		if(c>d)
		{
		printf("c is big");
		}
		else
		{
		printf("d is big");
		}
	    }
	}
	else
	{
	  if(b>c)
	    {
		if(b>d)
		{
		printf("b is big");
		}
		else
		{
		printf("d is big");
		}
	    }
	    else
	    {
		if(c>d)
		{
		printf("c is big");
		}
		else
		{
		printf("d is big");
		}
	    }
	}

      getch();
 }



















	    if(b<c)
	    {
	    printf("%d is minimum",b);
	    }
	    else
	    {
	    printf("%d is minimum",c);
	    }
	}
	getch();

}
