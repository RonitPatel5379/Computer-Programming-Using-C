#include<stdio.h>
void main()
{
    int days,week,year,totaldays;
    printf("Enter totaldays:");
    scanf("%d",&totaldays);
    year=totaldays/365;
    totaldays=totaldays%365;
    week=totaldays/7;
    totaldays=totaldays%7;
    days=totaldays;
    printf("%d year,%d week and %d days",year,week,days);
}