#include<stdio.h>
int main(){
int a=5,b=6,y;
y=++a + a++ * ++a;
printf("%d",y);
return 0;
}