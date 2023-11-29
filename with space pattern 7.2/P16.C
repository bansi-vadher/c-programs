/*
ABCDE
 BCDE
  CDE
   DE
    E
*/
#include<stdio.h>
int main()
{
     char j,i,s;
    

     for(i='A'; i<='E'; i++)
     {
          for(s='A';s<i;s++)
          {
             printf(" ");  
          }

          for(j=i; j<='E'; j++)
          {
               printf("%c",j);
          }
            
         printf("\n");     
     }

return 0; 
}