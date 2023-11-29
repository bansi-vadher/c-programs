/*
12345
 1234
  123
   12
    1
*/

#include<stdio.h>
int main()
{
     int j,i,s;

     for(i=5; i>=1; i--)
     {
          for(s=5;s>i;s--)
          {
             printf(" ");  
          }

          for(j=1; j<=i; j++)
          {
               printf("%d",j);
          }
            
         printf("\n");     
     }

return 0; 
}

