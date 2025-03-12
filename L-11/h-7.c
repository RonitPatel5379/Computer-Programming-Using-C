#include<stdio.h>
void main()
{
    int freq[10]={0},n,rem,i=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        freq[rem]++;
        n=n/10;
    }
    for(i=0;i<10;i++)
    {
        if(freq[i]>0)
        {
            printf("num %d is %d times",i,freq[i]);
            printf("\n");
        }
    }
}