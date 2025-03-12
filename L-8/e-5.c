#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the a & b:");
    scanf("%d %d",&a,&b);
    if(a%2!=0)
    {
        a++;
    }
    printf("Even numbers between %d & %d are:\n",a,b);
    while(a<=b)
    {
        printf("%d\n",a);
        a=a+2;
    }
}