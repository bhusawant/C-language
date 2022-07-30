#include <stdio.h>
#include <math.h>

void  main()
{
    int i, n, fact = 1;
    printf("Enter the number\n");
    scanf("%d", &n);
    for ( i = 1; i <=n; i++)
    {
        fact = fact*i;
    }
    printf("The factorial is %d\n",fact);
    
}