#include <stdio.h>
void main()
{
    int i,j,k,m,n,p,a[10][10],b[10][10],c[10][10];
    printf("Enter the number of rows and columns for first matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("The first matrix is:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the number of columns for second matrix:\n");
    scanf("%d",&p);
    printf("Enter the elements:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < p; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    printf("The second matrix is:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("The resulted matrix is:\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < p; j++)
        {
            c[i][j]=0;
            for ( k = 0; k < n; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
    