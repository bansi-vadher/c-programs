//(x+y)^2
#include <stdio.h>

int main()
 {
    int x, y;
    
    printf("Enter X:");
    scanf("%d",&x);
    printf("Enter Y:");
    scanf("%d",&y);
    
    printf("Ans:%d",(x*x)+(2*x*y)+(y*y));
    
    return 0;
}
