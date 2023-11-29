/*
    A
   BA
  CBA
 DCBA
EDCBA
*/
#include<stdio.h>
int main()
{
     char j,i,s;
    

     for(i='A'; i<='E'; i++)
     {
          for(s='E';s>i;s--)
          {
             printf(" ");  
          }

          for(j=i; j>='A'; j--)
          {
               printf("%c",j);
          }
            
         printf("\n");     
     }

return 0; 
}
