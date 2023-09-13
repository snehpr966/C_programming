#include<stdio.h>
#include<math.h>
int main(){
    int choice,num1,num2,numerator,denominator,remainder,gcd,lcm,dec=0,rem,i=0;
    float area,base,height,p,r,t,amount,ci,a,b,c,d,root1,root2,realPart,imagPart;
    long int n;
    printf("Menu\n1.Area of a triangle\n2.Calculate Compound Interest\n3.Quadratic Equation Solution\n4.To find GCD and LCM of two numbers\n5.Convert Binary to Decimal");
    printf("\nnumber of your choice");
    scanf("%d",&choice);
    switch(choice)
    {case 1:
    printf("enter the base and height of the triangle");
    scanf("%f %f",&base,&height);
    area=0.5*base*height;
    printf("Area of the triangle= %.2f",area);
    break;
    case 2:
    printf("enter principal,rate and time in order");
    scanf("%f %f %f",&p,&r,&t);
    amount=p*(pow((1+r/100),t));
    ci=amount-p;
    printf("\nCompound interest=%f",ci);
    break;
    case 3:
    printf("enter coefficients a,b,c for the quadratic equation");
    scanf("%1f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    //condition for real and different roots//
    if(d>0){
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("root1=%.2f and root2=%.2f",root1,root2);
    }
    else if (d==0){
        root1=root2=-b/(2*a);
        printf("root1=root2=%.2f",root1);
    }
    else{
        printf("roots are imaginary");
        realPart= -b/(2*a);
        imagPart=sqrt(-d)/(2*a);
        printf("root1=%.2f+%.2f and root2=%.2f-%.2f",realPart,imagPart);
    }
    break;
      case 4:
      printf("enter two numbers\n");
      scanf("%d %d",&num1,&num2);
      if(num1>num2){
          numerator=num1;
          denominator=num2;
      }
      else{
          numerator=num2;
          denominator=num1;
      }
      remainder=numerator%denominator;
      while(remainder!=0){
          numerator=denominator;
          denominator=remainder;
          remainder=numerator%denominator;
      }
      gcd=denominator;
      lcm=num1*num2/gcd;
      printf("GCD of %d and %d is %d\n",num1,num2,gcd);
      printf("LCM of %d and %d is %d\n",num1,num2,lcm);
      break;
    case 5:
    printf("enter a binary number:\n");
    scanf("%ld",&n);
    while (n!=0)
    {
        rem=n%10;
        dec=dec+rem*pow(2,i);
        i++;
        n=n/10;/* code */
    }
    printf("%d in decimal",dec);
    break;
    return 0;
}
}