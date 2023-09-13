#include<stdio.h>
int main(){
    int i,n;
    int t1=0,t2=1,c;
    c=t1+t2;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("%d,%d,",t1,t2);
    for (i=3;i<=n;i++)
    {
        printf("%d,",c);
      t1=t2;
      t2=c;
      c=t1+t2;
    }
    return 0;
}