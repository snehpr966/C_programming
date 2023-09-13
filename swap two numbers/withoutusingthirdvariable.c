#include<stdio.h>
int main(){
    int var1,var2;
    printf("enter two numbers");
    scanf("%d%d",&var1,&var2);
    printf("numbers before swapping=%d%d",var1,var2);
    var1=var1+var2;
    var2=var1-var2;
    var1=var1-var2;
    printf("numbers after swapping=%d%d",var1,var2);
    return 0;
}