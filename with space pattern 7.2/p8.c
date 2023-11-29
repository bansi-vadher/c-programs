/*
12345
 2345
  345
   45
    5
*/
#include<stdio.h>
int main()
{
     int j,i,s;

     for(i=1; i<=5; i++)
     {
          for(s=1;s<i;s++)
          {
             printf(" ");  
          }

          for(j=i; j<=5; j++)
          {
               printf("%d",j);
          }
            
         printf("\n");     
     }

return 0; 
}
