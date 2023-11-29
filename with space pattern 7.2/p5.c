/*
    1
   22
  333
 4444
55555
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

          for(j=1; j<=i; j++)
          {
               printf("%d",i);
          }
            
         printf("\n");     
     }

return 0; 
}


