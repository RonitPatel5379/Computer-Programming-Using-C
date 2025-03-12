#include<stdio.h>
void main()
{
    int n,i;
    for(i=1;i<=10;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}