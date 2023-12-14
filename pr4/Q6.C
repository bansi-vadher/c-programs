/*
    5
   454
  34543
 2345432
123454321
 2345432
  34543
   454
    5
   
*/
#include<stdio.h>
int main()
{
     int i,j,s;

     for(i=5;i>=1;i--)
     {
          for(s=1;s<i;s++)
          {
               printf(" ");
          }
          for(j=i;j<=5;j++)
          {
          printf("%d",j);
          }
          for(j=4;j>=i;j--)
          {
          printf("%d",j);
          }
          printf("\n");     
     }

     for(i=2;i<=5;i++)
     {
          for(s=1;s<i;s++)
          {
               printf(" ");
          }
          for(j=i;j<=5;j++)
          {
               printf("%d",j);
          }
          for(j=4;j>=i;j--)
          {
               printf("%d",j);
          }
          printf("\n");
     }

      return 0;
}