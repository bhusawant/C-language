#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    float s, area;
    printf("Enter the values of a,b,c:\n");
    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of triangle = %f", area);
}