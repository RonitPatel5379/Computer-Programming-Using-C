#include<stdio.h>
void main()
{
    int n,i=1,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of numbers:%d",sum);
}