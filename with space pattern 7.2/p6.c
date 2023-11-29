/*
    5
   44
  333
 2222
11111
*/
#include<stdio.h>
int main()
{
     int j,i,s;

     for(i=5; i>=1; i--)
     {
           for(s=1;s<i;s++)
          {
             printf(" ");  
          }

          for(j=i; j<=5; j++)
          {
               printf("%d",i);
          }
            
         printf("\n");     
     }

return 0; 
}
