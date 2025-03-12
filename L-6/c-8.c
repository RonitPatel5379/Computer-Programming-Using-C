#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter the three sides:");
    scanf("%f %f %f",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("Equilateral triangle");
    }
    else if(a==b || b==c || a==c)
    {
        printf("Isosceles triangle");
    }
    else if((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a))
    {
        printf("Right angled triangle");
    }
    else
    {
        printf("scalene triangle");
    }
}