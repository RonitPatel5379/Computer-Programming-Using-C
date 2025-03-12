#include<stdio.h>
void main()
{
    int n,r=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n>0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    while(r>0)
    {
        printf("%d\n",r%10);
        r=r/10;
    }
}