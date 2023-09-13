#include<stdio.h>
int main(){
int a=10,b=5,y;
y=++a +b-- +a-- +b +a;
printf("%d",y);
return 0;
}