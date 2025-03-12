#include<stdio.h>
void main()
{
    int a,b;
    printf("enter numbers a&b:");
    scanf("%d %d",&a,&b);
    (a^b) ? printf("numbers are not equal") : printf("numbers are equal");
}