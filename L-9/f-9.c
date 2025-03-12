#include<stdio.h>
void main()
{
    int dec,rem,binary=0,place=1;
    printf("Enter a decimal number:");
    scanf("%d",&dec);
    while(dec>0)
    {
        rem=dec%2;              
        binary+=rem*place;
        dec=dec/2;
        place=place*10;
    }
    printf("Binary representation:%d\n",binary);
}