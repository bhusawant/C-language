#include <stdio.h>

void main()
{
    int a, b, c, Large, Largest;
    printf("Enter the values for a,b,c:\n");
    scanf("%d %d %d", &a, &b, &c);
    Large = (a > b) ? a : b;
    Largest = (Large > c) ? Large : c;
    printf("The largest number = %d", Largest);
}