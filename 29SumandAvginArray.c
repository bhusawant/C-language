#include<stdio.h>
void main()
{
    int n, i,a[100],sum=0;
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
        sum=sum+a[i];
    }
    avg=(float)sum/n;
    printf("The sum of the numbers is %d\n",sum);
    printf("The average of the numbers is %f",avg);
}