#include<stdio.h>
void main()
{
    int a,b,c;
    float avg;
    printf("The avg. of 1,2,3 is = 2\n");
    printf("Enter the value of a,b&c:");
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("avg=%f",avg);
}