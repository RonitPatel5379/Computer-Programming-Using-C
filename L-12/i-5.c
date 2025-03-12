#include<stdio.h>
void main()
{
    int i=1,j=1,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum+=j;
        }
    }
    printf("totalsum=%d",sum);
}