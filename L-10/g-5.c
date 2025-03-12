#include<stdio.h>
void main()
{
    int n=0,reversedNum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n!=0)
    {
        reversedNum=reversedNum*10+n%10;
        n=n/10;
    }
    printf("Reverse number:%d",reversedNum);
}