#include<stdio.h>

int main()
{
    int n,i, j, k=1;
    printf("enter the no. of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=i;j<i;j++)
    {
        printf("");
    }
    for(j=1;j<i;j++)
        {
            printf("%3d ",k*k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
