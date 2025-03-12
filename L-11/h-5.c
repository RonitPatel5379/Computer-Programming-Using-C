#include<stdio.h>
void main()
{
    int n,i=1;
    unsigned long long factorial=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("factorial:%llu",factorial);
}