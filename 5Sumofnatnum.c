#include <stdio.h>

void main()
{
    int i, sum = 0;
    for ( i = 5; i*(i+1) < 400; i++)
    {
        sum = sum +i;
    }
    printf("The sum of natural numbers is:\n%d", sum);
}