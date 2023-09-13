#include <stdio.h>
int main ()
{
    float r,a,c;
    const pi=3.14;
    printf("enter Radius of Circle");
    scanf("%d", &r);
    a= ((3.14)*(r*r));
    c=((2*pi)* r);
    printf("\n Area = %d in circumporonne = %d",a,c);
    return 0;
    }