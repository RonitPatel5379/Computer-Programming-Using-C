#include<stdio.h>
void main()
{
    int a,b,c,secondlargest;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>=b) && (a<=c) || (a<=b) && (a>=c))
    {
        secondlargest=a;
    }
    else if((b>=a) && (b<=c) || (b<=a) && (b>=c))
    {
        secondlargest=b;
    }
    else
    {
        secondlargest=c;
    }
    printf("The secondlargest no. is %d",secondlargest);
}