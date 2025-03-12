#include<stdio.h>
void main()
{
    int h,b;
    float area;
    printf("Enter the value of h&b:");
    scanf("%d %d",&h,&b);
    area=float(h*b)/2;
    printf("area=%f",area);
}