#include<stdio.h>
int main(){
    int temp,f;
    printf("enter temp in celcius");
    scanf("%d",&temp);
    f=((temp*9)/5)+32;
    printf("temp in fahrenheit is %d",f);
    return 0;
}