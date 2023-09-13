#include <stdio.h>
int main()
{
int p, r, t, i, a;
printf("enter the principal amount");
scanf("%d",&p);
printf("enter the time in years");
scanf("%d", &t);
           printf("Enter the rate of user:");
           scanf("%d",&r);
           i=(((p*r)/100)*t);
                a=p+i;
           printf("your interest is %d with amount of% d",i,a);

}