#include<stdio.h>
void main()
{
    int base,exp,result=1,i=1;
    printf("Enter the base & exp:");
    scanf("%d %d",&base,&exp);
    while(i<=exp)
    {
        result=result*base;
        i++;
    }
    printf("%d^%d=%d\n",base,exp,result);
}