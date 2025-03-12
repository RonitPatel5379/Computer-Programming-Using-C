#include<stdio.h>
void main()
{
    int n,ld;
    printf("Enter the value of n:");
    scanf("%d",&n);
    ld=n%10;
    if(ld%2==0)
    printf("ld %2d is even",n);
    else
    printf("ld %d is odd",n);
}