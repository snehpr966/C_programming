#include<stdio.h>
int main(){
    int num,i,y=0;
    printf("enter a positive integer:");
    scanf("%d",&num);
    for(i=2;i<=num/2;++i){
        if(num%i==0){
            y=1;
            break;
        }
    }
    if (num==0||num==1){
        printf("%d is neither prime nor composite",num);
    }
    else{
        if(y==0)
        printf("%d is prime",num);
        else
        printf("%d is not prime",num);
    }
    return 0;
}