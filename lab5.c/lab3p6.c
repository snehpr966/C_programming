#include<stdio.h>
int main(){
int a=20,b=10,y;
y=++a +b++ +b + --a ;
printf("%d",y);
return 0;
}