/*
    A
   AB
  ABC
 ABCD
ABCDE
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

          for(j='A'; j<=i; j++)
          {
               printf("%c",j);
          }
            
         printf("\n");     
     }

return 0; 
}
