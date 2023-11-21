/*
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include<stdio.h>
int main()
{
     int j,i,b=1;

     for(i=5; i>=1; i--)
     {
          for(j=i; j<=5; j++)
          {
               printf("%d ",b);
               b++;
          }
            
         printf("\n");     
     }

return 0; 
}

