#include<stdio.h>
void main()
{
    int i=1,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Factors of %d are:",n);
    while(i<=n)
    {
        if(n%i==0)
        printf("%d ",i);
        i=i+1;
    }
}