#include<stdio.h>
void main()
{
    int n,i=0,a=0,b=0;
    while(i<10)
    {
        printf("Enter the value of n:");
        scanf("%d",&n);
        if(n%2==0)
        {
            a++;
        }
        else
        {
            b++;
        }
        i++;
    }
    printf("Even numbers:%d\n",a);
    printf("odd numbers:%d\n",b);
}