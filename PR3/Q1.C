#include<stdio.h>
#include<conio.h>
void main()
{
	char ch='a';
	clrscr();

	do
	{
	printf("%c\n",ch);
	ch=ch+4;
	}
	while(ch<='z');

	 getch();
}
