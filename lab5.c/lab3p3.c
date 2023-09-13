#include<stdio.h>
int main(){
    int a,b,small;
    printf("enter any two numbers");
    scanf("%d%d",&a,&b);
    small=a<b?a:b;
    printf("\nSmallest among the two is %d",small);
    return 0;
}