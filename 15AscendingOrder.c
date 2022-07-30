#include <stdio.h>

void main()
{
    int i, j, n, a[100], temp;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the value:\n");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i <= n - 2; i++)
    {
        for (j = 0; j <= n - 2; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
        printf("Atfer sorting the ascending order is:\n");
        for (i = 0; i <= n - 1; i++)
        {
            printf("%d\n", a[i]);
        }
    
}