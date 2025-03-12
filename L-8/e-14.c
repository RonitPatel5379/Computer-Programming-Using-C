#include<stdio.h>
void main()
{
    int a,b,c=0,i=0,isNegative=0;
    printf("Enter two numbers to multiply:");
    scanf("%d %d",&a,&b);
    while(i<b)
    {
        c=c+a;
        i++;
    }
    if(isNegative)
    {
    c=-c;
    }
    printf("your multiplication is:%d",c);
}