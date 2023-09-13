/*WAP in C to calculte profit or loss*/
#include<stdio.h>
int main(){
    int cp,sp;
    printf("enter the cost price of the product\n");
    scanf("%d",&cp);
    printf("enter the selling price of the product\n");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit is %d",(sp-cp));
    }
    else if(cp>sp){
        printf("loss of %d\n",(cp-sp));
    }
    else{
        printf("neither profit nor loss");
    }
    return 0;
}