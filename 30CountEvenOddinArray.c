#include<stdio.h>
void main()
{
    int n, i,a[100],even=0,odd=0;
    float avg;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the values:\n");
    for ( i = 0; i <=n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <=n-1; i++)
    {
        if (a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d",odd);
}