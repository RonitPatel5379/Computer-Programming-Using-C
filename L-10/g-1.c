#include<stdio.h>
void main()
{
    int n,fd,ld,sum;
    printf("Enter the value of n:");
    scanf("%d",&n);
    ld=n%10;
    fd=n;
    while(fd>=10)
    {
        fd=fd/10;
    }
    sum=fd+ld;
    printf("Sum of first and last digit: %d\n",sum);
}