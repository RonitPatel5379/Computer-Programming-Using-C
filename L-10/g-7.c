#include<stdio.h>
void main()
{
    int n,i=2,flag=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("not prime number");
    }
    while(i<=n/2)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}