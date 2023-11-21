/*
A 
A B
A B C
A B C D
A B C D E
*/
#include<stdio.h>
int main()
{
     char j,i;

     for(i='A'; i<='E'; i++)
     {
          for(j='A'; j<=i; j++)
          {
               printf("%C ",j);
          }
            
         printf("\n");     
     }

return 0; 
}
