#include<stdio.h>

int main(){
//     import java.util.Scanner;

// public class Prime {
//   //  int n;
//     Scanner sc=new Scanner(System.in);
int n;
    printf("Enter any number\n");
    scanf("%d",&n);
//    // int n=sc.nextInt();
//     int flag=0;
    int r;
    for(int i=2;i<=n/2;i++){
        r=n%i;
        if(r==0){
            n++;
            break;
    }
    else{
         printf("%d",n);
    }
    }

    //m=n+1;
    // while(n<10000){
    //     for (int j = 2; j <=n/2; j++,n++)
    //     {
    //         if((n%j)==0){
    //         break;
    //         }
    //         else{
    //             printf("%d",n);
    //         }
    //     }
       // m=m+1;
    }
           //S printf("%d",m);
            /* code */


        // while(n<10000){
        //     for(int j=n+1;j<100000;j++){
        //       for(int k=2;k<=j/2;k++){
        //         if((j%k)!=0){
        //             printf("%d",j);
        //         }
              
