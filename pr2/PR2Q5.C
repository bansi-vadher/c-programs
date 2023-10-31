#include<stdio.h>
#include<conio.h>
main()
{

      int unit,bill,sc,tb;
      clrscr();

      printf("enter unit:");
      scanf("%d",&unit);

      if(unit>0&&unit<50)
      {
	 bill=unit*0.5;

      }
      else if(unit>50&&unit<150)
      {
	bill=25+(unit-50)*0.75;

      }
      else if(unit>150&&unit<250)
      {

	bill=100+(unit-150)*1.2;

      }
      else
      {

	bill=220+(unit-250)*1.5;

      }

       sc=bill*0.20;
       tb=sc+bill;
       printf("total bill:%d",tb);

  getch();


}