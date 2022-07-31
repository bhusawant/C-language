#include <stdio.h>

void sum(int x[10],int y[10],int z[10],int n)
{
    int s1,s2,s3,sum=0,i;
    for ( i = 1; i <=n; i++)
    {
        s1 = (x[i]*x[i]*y[i]);
        s2 = (x[i]*y[i]*y[i]);
        s3 = (x[i]*y[i]*z[i]);
        sum = sum +s1+s2+s3;
    }
    printf("T= %d",sum);
    
}

void main()
{
    int x[100],y[100],z[100],n,i;
    printf("Enter the total numbers of terms:\n");
    scanf("%d", &n);
    printf("Enter the values of x:\n");
    for ( i = 1; i <=n; i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Enter the values of y:\n");
    for ( i = 1; i <=n; i++)
    {
        scanf("%d",&y[i]);
    }
    printf("Enter the values of z:\n");
    for ( i = 1; i <=n; i++)
    {
        scanf("%d",&z[i]);
    }
    sum (x,y,z,n);
}