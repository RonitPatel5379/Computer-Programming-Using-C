#include<stdio.h>
void main()
{
    int n,revnum=0,rem,actnum;
    printf("Enter the value of n:");
    scanf("%d",&n);
    actnum=n;
    while(n!=0)
    {
        rem=n%10;
        revnum=revnum*10+rem;
        n=n/10;
    }
    if(actnum==revnum)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not Palindrome Number");
    }
}