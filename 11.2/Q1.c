#include<stdio.h>
int main()
{
     int n,i,*ptr;

     printf("enter the array's size : ");
     scanf("%d",&n);

     int a[n];
     ptr=&a[n-1];

     printf("enter array elements:-\n");

     for(i=0;i<n;i++)
     {
          printf("a[%d]:",i);
          scanf("%d",&a[i]);
     }

     printf("\n Reverse array element :");

     for(i=0;i<n;i++)
     {
          printf("%d, ",*ptr--);
     }
}