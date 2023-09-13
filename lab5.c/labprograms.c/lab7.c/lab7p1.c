#include<stdio.h>  
int main()    
{    
int n,r,sum=0,rev;    
 printf("enter the number=");
scanf("%d",&n);    
rev=n; 
do{
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
} 
while(n>0);      
if(rev==sum) 
{ 
printf("palindrome number ");   
} 
else    
printf("not palindrome");   
return 0;  
}