#include<stdio.h>
void main()
{
    int base,exp,result=1,i,j;
    printf("Enter the base&exponent:");
    scanf("%d %d",&base,&exp);
    for(i=0;i<exp;i++)
    {
        int temp=0;
        for(j=0;j<result;j++)
        {
            temp=temp+base;
        }
        result=temp;
    }
    printf("%d^%d=%d",base,exp,result);
}