#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter the value of a,b&c:");
    scanf("%d %d %d",&a,&b,&c);
    d=(a>b) ? a : b*c;
    printf("%d",d);
}