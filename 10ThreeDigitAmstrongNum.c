#include <stdio.h>

void main()
{
    int i, num, sum, t;
    for (i = 100; i <= 999; i++)
    {
        t = i;
        sum = 0;
        while (t > 0)
        {
            num = t % 10;
            sum = sum + num * num * num;
            t = t / 10;
        }

        if (sum == i)
        {
            printf("%d is Armstrong number\n", i);
        }
    }
}