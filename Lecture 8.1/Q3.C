#include<stdio.h>
int main()
{
     int i,j,n;

     printf("\n Enter n: ");
     scanf("%d",&n);

     int a[n],b[n],c[n];

     printf("\nEnter array A's elements :\n");
     for(i=0;i<n;i++)
     {
          printf("a[%d] = ",i);
          scanf("%d",&a[i]);
     }

     printf("\nEnter array B's elements : \n");
     for(i=0;i<n;i++)
     {
          printf("a[%d] = ",i);
          scanf("%d",&b[i]);
     }

     for(i=0;i<n;i++)
     {
       c[i]=a[i]+b[i];        
     }

      for(i=0;i<n;i++)
     {
          printf("%d , ",c[i]);
     }
       
     return 0;
}
