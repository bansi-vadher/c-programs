/* write a pro.to find the area of a circle .
   area=pi*radius^2
   pi=3.14 */

   #include<stdio.h>
   #include<conio.h>

   main()
   {
	   float radius,area;
	   clrscr();

	   printf("\n enter the  radius of circle:");
	   scanf("%f",&radius);

	   area=3.14*radius*radius;
	   printf("\n area of circle:%f",area);

	   getch();

 }


