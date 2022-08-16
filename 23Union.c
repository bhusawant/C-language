#include <stdio.h>
void main()
{
    union info
    {
        char name[100];
        int id;
    };
    union info s;
    int n;
    printf("What info do you want to provide\n1.name\n2.ID number\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Enter your name:\n");
        scanf("%s",&s.name);
        printf("Your name is %s",s.name);
        break;
    
    case 2:
        printf("Enter your ID number:\n");
        scanf("%d",&s.id);
        printf("Your ID number is %d",s.id);
        break;

    default:
    printf("Invalid input");
        break;
    }
}