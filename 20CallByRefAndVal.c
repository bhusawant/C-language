//call by reference
#include <stdio.h>

void swap(int*x,int*y);
void main()
{
    int x,y,*i,*j;
    printf("Enter the value of x and y:\n");
    scanf("%d %d", &x, &y);
    printf("Numbers before swapping x=%d and y=%d\n", x, y);
    swap(&x, &y);
    printf("Numbers after swapping x=%d and y=%d", x, y);
}

void swap(int*x, int*y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//call by value
/*#include <stdio.h>
void swap(int x, int y);
void main()
{
    int x, y;
    printf("Enter the values for x and y\n");
    scanf("%d%d",&x, &y);
    printf("Numbers before swapping x=%d and y=%d\n",x,y);
    swap(x,y);
}
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("Numbers after swapping x=%d and y=%d",x,y);
 
}*/