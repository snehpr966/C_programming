#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter any three numbers\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1<num2&&num1<num3){
        printf("%d is the smallest of the three",num1);
    }
    else if(num2<num3){
        printf("%d is the smallest\n",num2);
    }
    else{
        printf("%d is the smallest",num3);
    }
    return 0;
}