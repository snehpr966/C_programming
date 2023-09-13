#include<stdio.h>
int main(){
    float bsal,da,hra,ta,pf,it,gross,net_sal;
    printf("Enter the basic salary");
    scanf("%f",&bsal);
    da=bsal*0.31;
    hra=bsal*0.18;
    ta=bsal*0.16;
    pf=bsal*0.10;
    it=bsal*0.20;
    gross=bsal+da+hra+ta+pf+it;
    net_sal=gross-(pf+it);
    printf("\nBasic Salary=%f",bsal);
    printf("\nDA=%f",da);
    printf("\nHRA=%f",hra);
    printf("\nTA=%f",ta);
    printf("\npf=%f",pf);
    printf("\nit=%f",it);
    printf("\nGross Salary=%f",gross);
    printf("\nNet Salary=%f",net_sal);
    return 0;
}