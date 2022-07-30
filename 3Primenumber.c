#include <stdio.h>
#include <math.h>

void main()
{
    int count = 0, i, a, k;
    printf("Enter the number:\n");
    scanf("%d", &a);
    for ( i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            count = count + 1;
        }
    }
    if (count == 1)
    {
        printf("The number is prime\n");
    }
    else
    {
        printf("The number is not prime\n");
    }
    if (a % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
    k = sqrt(a);
    if (a == k * k)
    {
        printf("The number is perfect square\n");
    }
    else
    {
        printf("The number is not perfect square\n");
    }
}