#include<stdio.h>

void main()
{
	int i,sum=0,*ptr;
	char str[150];
	
	printf("Enter your string: ");
	scanf("%[^\n]",&str);
	
	ptr=&sum;
	
	for(i=0;str[i]!='\0';i++)
	{
		*ptr+=1;
	}
	
	printf("\n The Length of string is: %d ",*ptr);
}
