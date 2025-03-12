#include<stdio.h>
void main()
{
    int n,mul,div;
    printf("Enter the value of n:");
    scanf("%d",&n);
    mul=n<<1;
    printf("Multiplication by 2:%d\n",mul);
    div=n>>1;
    printf("Division by 2:%d\n",div);
}