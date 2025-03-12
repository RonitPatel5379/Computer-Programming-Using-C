#include<stdio.h>
void main()
{
    int a,b,c,d,e,pr;
    printf("Enter the five subjects marks:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    pr=(a+b+c+d+e)/5;
    printf("%d\n",pr);
    if(pr<=35)
    {
        printf("Fail");
    }
    else if(pr>=36 && pr<=45)
    {
        printf("Pass class");
    }
    else if(pr>=46 && pr<=60)
    {
        printf("Second class");
    }
    else if(pr>=61 && pr<=70)
    {
        printf("First class");
    }
    else
    {
        printf("Distinction");
    }
}