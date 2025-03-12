#include<stdio.h>
void main()
{
    float bs,DA,HRA,GS;
    printf("Enter the basic salary:");
    scanf("%f",&bs);
    if(bs>=30000)
    {
        HRA=0.30*bs;
        DA=0.95*bs;
    }
    else if(bs>=20000)
    {
        HRA=0.25*bs;
        DA=0.90*bs;
    }
    else if(bs>=10000)
    {
        HRA=0.20*bs;
        DA=0.80*bs;
    }
    GS=HRA+DA+bs;
    printf("%f",GS);
}