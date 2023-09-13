#include<stdio.h>
int main(){
    int a,b,c,sum;
    float d;
    printf("Please enter the 3 numbers");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    d=sum/3;
    printf("\nSum is %d",sum);
    printf("\nAverage is %f",d);
    return 0;
}