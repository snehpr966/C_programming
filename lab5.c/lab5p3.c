#include<stdio.h>
int main(){
    int num,r,sum=0,temp;
    printf("enter the number");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        r=num%10;
        sum=sum+(r*r*r);
        num/=10;
    }
    if(temp==sum)
    printf("armstrong number");
    else
    printf("not armstrong number");
    return 0;
}