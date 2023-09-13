#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("enter any number to check perfect no.");
    scanf("%d",&num);
    for (i=1;i<=num/2; i++)
    {
        if (num%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==num&&num>=0)
    {
      printf("%d is perfect number",num);
    }
    else
    {
        printf("%d is not a perfect number",num);
    }
    return 0;
}