#include<stdio.h>
void sumOfArray(int n,int a[])
{
     int i,sum=0;
     for(i=0;i<n;i++)
     {
      sum=sum+a[i];
     }
      printf("The sum of an Array: %d\n", sum);
}


int main()
{
     int n;
  

     printf("enter n:");
     scanf("%d",&n);

     int a[n];

     printf("Enter array elements:\n");

     for(int i=0;i<n;i++)
     {
          printf("enter a[%d] :",i);
          scanf("%d",&a[i]);

     }
     sumOfArray( n, a);
}

