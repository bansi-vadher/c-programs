#include<stdio.h>


int main()

 {
   int gross_salary, base_salary,hra, da, ta;
   

   printf("enter base salary :\n ");
   scanf("%d", &base_salary);

   hra=base_salary*0.10;
   da=base_salary*0.05;
   ta=base_salary*0.18;


   printf("hra : %d\n", hra);
   printf("da : %d\n", da);
   printf("ta : %d\n", ta);
   gross_salary = base_salary + da + ta+hra;
   printf("gross salary : %d\n", gross_salary);

   return 0;
}