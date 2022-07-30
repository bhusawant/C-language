#include <stdio.h>

void main()
{
    int num, sum = 0, x, i;
    printf("Enter a number\n");
    scanf("%d", &num);
    x=num;
    while (num>0)
    {
        i = num % 10;
        sum = sum + i*i*i;
        num =num/10;
    }
    if (sum == x)
    {
        printf("The number is Amstrong number\n");
    }
    else
    {
        printf("The number is not Amstrong number\n");
    }
    

}