#include<stdio.h>
int main()
{    
     float avg,sum;
     int n,i,j;
     
     printf("\nEnter array size : ");
     scanf("%d",&n);

     int a[n];

     printf("\nEnter array elements : \n");
     for(i=0;i<n;i++)
     {
          printf("a[%d]= ",i);
          scanf("%d",&a[i]);
          sum+=a[i];
     }
     
     avg=sum/n;
     printf("\nLength of an Array: %.2f",avg);
	
     return 0;
}