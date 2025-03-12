#include<stdio.h>
void main()
{
    int n,i=2,isPrime=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n<=1)
    {
        isPrime=0;
    }
    else
    {
        while(i<=n/2)
        {
            if(n%i==0)
            {
                isPrime=0;
                break;
            }
            i++;
        }
    }
    if(isPrime==1)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
}