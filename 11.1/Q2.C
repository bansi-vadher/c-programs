#include<stdio.h>
int main()
{
     int x,y,z,*ptrx,*ptry;

     printf("Enter the value of x: ");
     scanf("%d",&x);
     printf("Enter the value of y: ");
     scanf("%d",&y);

     ptrx=&x;
     ptry=&y;

     printf("\nBefore swapping: \n");
     printf("x :%d\ny :%d\n",*ptrx,*ptry);

     z=*ptrx;
     *ptrx=*ptry;
     *ptry=z;

     printf("\nAfter swapping: \n");
     printf("x :%d\ny :%d\n",*ptrx,*ptry);

}