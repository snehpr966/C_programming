#include<stdio.h>
int main()
{
	int n,b,sum=0,rev=0;
	printf("Enter the Number:");
	scanf("%d",&n);
	rev=n;

	do
	{
		b=n%10;
		sum=sum*10+b;
		n=n/10;
	}while (n>0);
	if(rev==sum)
	{
	printf("Given number is Palindrome number");
       }
	else
	{
	printf("Given number is not Palindrome number");
	}
	return 0;
}	 