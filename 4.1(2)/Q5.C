//(x+y)^3
#include <stdio.h>

int main()
 {
    int x, y;
    
    printf("Enter X:");
    scanf("%d",&x);
    printf("Enter Y:");
    scanf("%d",&y);
    
    printf("Ans:%d",(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y));
    
    return 0;
}