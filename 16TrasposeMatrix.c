#include <stdio.h>
void main()
{
    int i,j,r,c,a[10][10],b[10][10];
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements:\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("The given matrix is:\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose matrix is:\n");
    for ( i = 0; i < c; i++)
    {
        for ( j = 0; j < r; j++)
        {
            b[i][j]=a[j][i];
        }
        
    }
    
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}