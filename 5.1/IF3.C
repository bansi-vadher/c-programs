#include<stdio.h>
#include<conio.h>
main()
{
    char c;
    clrscr();

    printf("Enter any characater:");
    scanf("%c",&c);


    if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u')
     {
	printf("This character is vowel");
     }

    else
     {
     printf("This character is console ");
     }

    getch();



}