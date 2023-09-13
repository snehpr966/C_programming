#include <stdio.h>
int main ()
{
    int c,f;
    printf("Enter temprature; ");
    scanf("%d", &c);
    f = (((c*9)/5) + 32);
    printf("\n Temperature is = %d f",f);
    return 0;
    }