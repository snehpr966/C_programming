#include <stdio.h>
int main()
{    
    printf("Give two inputs");
    int a,b,c;
    printf("\n Ender Frist number");
    scanf ("%d", &a);
    printf ("\n Enter Second numbars");
    scanf ("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("Now the First Number is %d and Second number is %d",a,b);
    return 0;
    }