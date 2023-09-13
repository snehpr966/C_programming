#include<stdio.h>
int main(){
    int n,r,i;
    printf("enter the number for which table is to be obtained");
    scanf("%d",&n);
    {
        for(i=1,i<=10,i++;)
        r=n*i;
        printf("table",r);

    }
    return 0;
}