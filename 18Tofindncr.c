#include <stdio.h>

int fact(int n)
{
    int i, f=1;
    for ( i = 1; i <=n; i++)
    {
        f = f*i;
    }
    return f;
}

void main()
{
    int n, r, ncr;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter the value of r:\n");
    scanf("%d",&r);
    if (n<r)
    {
        printf("nCr could not be found as n is less than r");
    }
    else
    {
        ncr = fact(n)/(fact(n-r)*fact(r));
        printf("The value of nCr is:\n%d",ncr);
    }
    

}