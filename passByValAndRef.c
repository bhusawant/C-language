#include <stdio.h>
int add(int a, int b)
{
    int c = a + b;
    return c;
}
int add2(int *x)
{
    printf("Before adding the value inside function x=%d\n", *x);
    (*x) += 40;
    printf("After adding the value inside function x=%d\n", *x);
    return 0;
}
int main()
{
    int a = 87;
    int b = 58;
    int c = add(a, b);
    printf("Sum is %d\n", c);

    int x = 40;
    printf("Before function call x=%d\n", x);

    add2(&x);
    printf("After function call x=%d\n", x);
}