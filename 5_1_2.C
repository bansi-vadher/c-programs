#include<stdio.h>
#include<conio.h>

 main()
{
  int a;

  printf("Enter the value of a :");
  scanf("%d",&a);

  

  if(a>0)
  {
    printf("a is a positive number");
  }
  	  else if(a==0)
  	  {
  	  printf(" a is neutral number ");
  	  }
  else
  {
   printf(" a is negative number ");
  }
  
  getch();

}