#include <stdio.h>
int main()
{
 int a, b, c, d, e, f;
 printf("enter two numbers");
 scanf("%d%d",&a,&b);
 c=a+b;
 d=a-b;
 e=a*b;
 f=a/b;
 printf("\n sum=%d\n substraction=%d\n multiplication=%d\n division=%d", c, d, e, f);
 return 0;
}