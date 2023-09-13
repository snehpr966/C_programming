/*WAP to find the simple interest*/
#include<stdio.h>
int main(){
    int p,r,t;
    float a,i;
    printf("enter principle amount");
    scanf("%d",&p);
    printf("enter rate of interest");
    scanf("%d",&r);
    printf("enter time in year");
    scanf("%d",&t);
    a=p*r*t;
    i=a/100;
    printf("interest is %f",i);
}