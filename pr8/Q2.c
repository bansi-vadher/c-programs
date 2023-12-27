#include <stdio.h>

int cube(int *ptr)
 {
    return (*ptr) * (*ptr) * (*ptr);
 }

int main() {
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
         {
            printf("arr[%d][%d]= ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nCube of all elements:\n");

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%d ", cube(&arr[i][j]));
        }
        printf("\n");
    }

    return 0;
}
