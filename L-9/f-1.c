#include<stdio.h>
void main()
{
    int n,sum=0,i=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
        i++;
    }
    printf("The sum of series is:%d\n",sum);
}