#include<stdio.h>
#include<conio.h>
int main()

{

int i=0,N;
float n,avg,sum;
sum=0;
printf("Enter N: "); 
scanf("%d",&N);
printf("Enter the numbers : "); 

do{
scanf("%f",&n); 
sum=sum+n;
i++;
}
while (i<N);
avg=sum/N;
printf("%f\n",sum);
printf("%f",avg);
return 0;
}

