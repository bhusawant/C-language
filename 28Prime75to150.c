#include <stdio.h>
void main()
{
    int i, n, count;
    printf("The prime numbers between 75 to 150:\n");
    for (n = 75; n <= 150; n++)
    {
        count = 0;
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d ", n);
        }
    }
}