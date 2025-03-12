#include<stdio.h>
void main()
{
    int n,sum=0,count=0;
    char choice;
    do
    {
        printf("Enter the value of n:");
        scanf("%d",&n);
        sum=sum+n;
        count++;
        printf("Do you want to enter another number(y/n)?");
        scanf("%c",&choice);
    }
    while(choice=='y'||choice=='Y');
    float avg=(float)sum/count;
    printf("Sum:%d\n",sum);
    printf("Average:%f",avg);  
}