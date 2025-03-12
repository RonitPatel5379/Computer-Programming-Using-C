#include<stdio.h>
void main()
{
    int num,den,a,b,rem,hcf,lcm;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    num=a;
    den=b;
    while(den!=0)
    {
        rem=num%den;
        num=den;
        den=rem;
    }
    hcf=num;
    lcm=(a*b)/hcf;
    printf("Hcf:%d\n",hcf);
    printf("Lcm:%d\n",lcm);
}