/*example of simple if statement*/
#include<stdio.h>
int main(){
    int qty;
    float rate, amount, discount, total;
    printf("enter the quantity and rate");
    scanf("%d%f",&qty,&rate);
    amount=qty*rate;
    if(qty>=10)
    discount=amount*0.10;
    total=amount-discount;
    printf("total amount=%.2f",total);
    return 0;
}