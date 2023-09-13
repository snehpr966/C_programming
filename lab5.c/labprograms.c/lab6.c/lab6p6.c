
#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter a Number: "); 
scanf("%d",&n);
char CH='A'+n ;
int s = 1 ;
for (i=1;i<=n;i++)
{
for(j='A'; j<=CH; j++) 
printf ("%c",j);
if(i > 1)
{printf ("\b") ;
printf(" ");
 } 
 for(j=1; j<s;j++)
 {
     printf(" ");
 }
for(j=CH-1; j>='A';j--) {
printf( "%c",j);
}
printf("\n");
CH--;
 s=s+2;
}
return 0;

}

