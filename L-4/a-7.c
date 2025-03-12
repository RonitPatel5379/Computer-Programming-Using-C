#include<stdio.h>
void main()
{
    int p,r,tp;
    float si;
    printf("Enter the value of p,r&tp:");
    scanf("%d %d %d",&p,&r,&tp);
    si=(p*r*tp)/100;
    printf("si=%f",si);
}