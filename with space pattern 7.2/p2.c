/*
    1
   21
  321
 4321
54321
*/
#include<stdio.h>
int main()
{
     int j,i,s;

     for(i=1; i<=5; i++)
     {
          for(s=5;s>i;s--)
          {
             printf(" ");  
          }

          for(j=i; j>=1; j--)
          {
               printf("%d",j);
          }
            
         printf("\n");     
     }

return 0; 
}
