#include<stdio.h>
#include<conio.h>

void main() {

	int a,b,c;

	clrscr();

	printf("Enter a value of a :");
	scanf("%d",&a);
	printf("Enter a value of b :");
	scanf("%d",&b);
	printf("Enter a value of c :");
	scanf("%d",&c);


	if(a<b) 
	{

		 if(a<c)

		 {
		    printf("a is small");
		 }

		 else 
                 {
		    printf("c is small");
		 }

	}
	else 
	{

		if(b<c) 
                {
			printf("b is small");
		}

                else
                {
			printf("c is small");
		}

	}

	getch();
}