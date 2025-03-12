#include<stdio.h>
void main()
{
    int n,fd,ld,divisor=1,temp,swapped;
    printf("Enter the value of n:");
    scanf("%d",&n);
    temp=n;
    ld=n%10;
    while(temp>=10)
    {
        temp=temp/10;
        divisor=divisor*10;
    }
    fd=temp;
    swapped= (n % divisor)/10;
    swapped=ld*divisor + swapped*10 +fd;
    printf("swapped:%d",swapped);
}