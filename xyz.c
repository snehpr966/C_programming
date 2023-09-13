#include <stdio.h>
int main()
{
    printf("Enter first number");
    int a,b;
    scanf ("%d",&a);
    printf("\n Give second number");
    scanf ("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf ("Now the first number is %d and second number is %d",a,b);
    }