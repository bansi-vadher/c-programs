/*
A 
B C
D E F
G H I J
K L M N O
*/
#include<stdio.h>
int main()
{
     int j,i;
     char b='A';

     for(i=5; i>=1; i--)
     {
          for(j=i; j<=5; j++)
          {
               printf("%c ",b);
               b++;
          }
            
         printf("\n");     
     }

return 0; 
}

