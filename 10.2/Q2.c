#include<stdio.h>
#include<string.h>

int stringLen( char str[])
{
     int len=strlen(str);
     return len;
}
int main()
{
     char str[50];

     printf("Enter string:");
     scanf("%s",&str);

     printf("\n\n Length: %d",stringLen(str));
}