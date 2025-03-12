#include<stdio.h>
void main()
{
    int a,b,quotient=0,remainder,divisor,dividend;
    printf("Enter two Numbers:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        dividend=a;
        divisor=b;
    }
    else
    {
        dividend=b;
        divisor=a;
    }
    remainder=dividend;
    while(remainder>=divisor)
    {
        remainder-=divisor;
        quotient++;
    }
    printf("Quotient:%d\n",quotient);
    printf("Remainder:%d\n",remainder);
}