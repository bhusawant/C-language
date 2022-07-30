#include <stdio.h>

void main()
{
    int i, j, k, m, n;
    printf("Enter the number of rows:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        for (m = 1; m < i; m++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= n - i; k++)
        {
            printf("*");
        }
        for (m = 1; m < n - i; m++)
        {
            printf("*");
        }
        printf("\n");
    }
}