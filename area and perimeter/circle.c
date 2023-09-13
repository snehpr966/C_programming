/*WAP to find area and circumference of a circle*/
#include<stdio.h>
int main(){
    float pi=3.14;
    float r,area,circumference;
    printf("enter radius of the circle");
    scanf("%f",&r);
    area=pi*(r*r);
    circumference=2*pi*r;
    printf("area and circumference is %f and %f",area,circumference);
    return 0;
}