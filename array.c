#include<stdio.h>
int main()
{
    int arr[100],freq[100];
    int n,i,j,count;
    printf("Input the number of elements to be stored in the array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("Element-%d",n);
    scanf("%d",&arr[i]);
    freq[i]=-1;
    }
    for(i=0;i<n;i++)
    {
     count=1;
    }
    for(j=i+1;j<n;j++)
    {
    if(arr[i]==arr[j]){
    count++;
    freq[j]=0;
    }
    }
    if(freq[i]!=0){
    printf("%d occurs %d times\n",arr[i],freq[j]);
}
}

