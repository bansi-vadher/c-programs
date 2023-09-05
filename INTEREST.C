// simle interest program. i=p*r*n


# include <stdio.h>
# include <conio.h>

int main()
{


    int p,r,n, interest;
    clrscr();

    printf("Enter the p: ");
    scanf("%d", &p);

    printf("Enter the r: ");
    scanf("%d", &r);

    printf("Enter the n: ");
    scanf("%d", &n);

    interest = p*r*n;
    printf("The Simple interest is %d", interest);

    getch();

}