#include<stdio.h>
#include<stdlib.h>
int main(){
    int num1,num2,num3;
    printf("enter any three numbers");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2){
        if(num2>num3)
        printf("%d is the middle of the three",num2);
    }
    else if(num3>num1){
        printf("%d is the middle\n",num1);
    }
    else{
        printf("%d is the middle\n",num3);
    }
}

else
{
       if (num2<num3)
       {
            printf("%dis the middle no.",num2);
        }
    else if(num3<num1){
        printf("%d is the middle no.",num1);
    }
    else{
        printf("%d is the middle no.",num3);
    }
}
    return 0;
}

