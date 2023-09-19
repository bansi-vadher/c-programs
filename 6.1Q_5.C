//print leap year


#include <stdio.h>
#include <conio.h>

 main()
 {
    int a, n;
    clrscr();

    printf("enter a:");
    scanf("%d", &a);
    printf("enter n:");
    scanf("%d", &n);

    while (a <= n)
    {
	(a % 4 == 0) ? printf("%d\n", a) : 0;
	a++;
    }

    getch();

}
