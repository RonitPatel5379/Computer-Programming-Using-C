#include<stdio.h>
void main()
{
    int n,i;double e=1.0;long long fact=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
        e=e+1.0/fact;
    }
    printf("the value of e=%f",e);
}