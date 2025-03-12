#include<stdio.h>
void main()
{
    int i,n,f1=0,f2=1,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("fibonacci series:%d %d",f1,f2);
    for(i=3;i<=n;i++)
    {
        sum=f1+f2;
        f1=f2;
        f2=sum;
    }
}