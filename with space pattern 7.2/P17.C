/*
    1
   10
  101
 1010
10101
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
               printf("%d",j%2);
          }
          
            
          printf("\n");     
     }

return 0; 
}
