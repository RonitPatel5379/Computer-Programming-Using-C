#include<stdio.h>
void main()
{
    int n,i=1,sum=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("sum =%d",sum);
}