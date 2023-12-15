#include<stdio.h>

void cube(int n)
{
     printf("cube is:%d",n*n*n);     
}

int main()
{
     int n;
     printf("Enter n:");
     scanf("%d",&n);
     cube(n);

     return 0;
}