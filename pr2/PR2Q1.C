#include<stdio.h>
   #include<conio.h>


int main()
{
	char ch;
	 printf("enter character :");
	 scanf("%c",&ch);
	 if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	  {

		printf("character is alphabet");
	}
	   else if(ch>=0&&ch<=9)
	   {
		printf("character is number");
	   }
	    else
		{
		printf("special character");
		}
	 getch();
}
