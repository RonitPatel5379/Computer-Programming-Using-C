#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n&1)
    printf("Odd");
    else
    printf("Even");
}