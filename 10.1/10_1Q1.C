#include<stdio.h>

void divisible(int n)
{
     if(n%3==0&&n%5==0)
     printf("The given number is divisible by both 3&5.");
     else     
     printf("The given number is NOT divisible by both 3&5.");     
}

int main()
{
     int n;
     printf("Enter n:");
     scanf("%d",&n);
     divisible(n);
     
     return 0;
}