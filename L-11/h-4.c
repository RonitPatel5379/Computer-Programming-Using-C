#include<stdio.h>
void main()
{
    int base,exp,i=1,result=1;
    printf("Enter the value of base & exponent:");
    scanf("%d %d",&base,&exp);
    for(i=1;i<=exp;i++)
    {
        result=result*base;
    }
    printf("%d^%d=%d\n",base,exp,result);
}