#include <stdio.h>
#include <math.h>

void main()
{
    float i, n, sum;
    printf("Enter the number\n");
    scanf("%f", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (1 / i);
    }
    printf("The sum is %f\n", sum);
}