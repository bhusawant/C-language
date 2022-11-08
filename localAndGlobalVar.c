#include <stdio.h>
int d=6;
char e ='f';
float f = 9.5;
 
float a= 7.55;
int b = 5;
char c = 'd';

int global()
{
printf("The value of a is %f\n",a);
printf("The value of b is %d\n",b);
printf("The value of c is %c\n",c);
return 0;
}

void main()
{
    int a=1;
    char b ='g';
    float c = 5.5;
    global();
    printf("The value of a is %d\n",a);
    printf("The value of b is %c\n",b);
    printf("The value of c is %f\n",c);
    printf("The value of d is %d\n",d);
    printf("The value of e is %c\n",e);
    printf("The value of f is %f\n",f);
    
}