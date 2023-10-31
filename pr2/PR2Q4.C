#include<stdio.h>
#include<conio.h>
main()
{
	char day;
	clrscr();

	printf("\nM - monday");
	printf("\nT - tuesday");
	printf("\nW - wednesday");
	printf("\nU - tursday");
	printf("\nU - friday");
	printf("\nF - saturday");
	printf("\nS - sundayday");


	printf("\nenter day:");
	scanf("%c",&day);

       switch(day)
       {

       case 'M':
	       printf("Today is Monday");
	       break;

      case 'T':
	       printf("Today is Tuesday");
	       break;

      case 'W':
	       printf("Today is Wednesday");
	       break;

     case 'U':
	       printf("Today is Tursday");
	       break;


     case 'F':
	       printf("Today is Friday");
	       break;


     case 'S':
	       printf("Today is Saturday");
	       break;

    case 'H':
	       printf("Today is Sunday");
	       break;

       }

	   getch();



}