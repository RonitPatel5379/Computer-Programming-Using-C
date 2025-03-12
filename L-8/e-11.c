#include <stdio.h>
void main() 
{
   int i=1,n=10,result=0,square;
    while(i<=n)
    {
    square=i*i;
    if(square%10==4)
    {
        result=result+square;      
    }  
    i=i+1;
    }
    printf("%d\n",result);  
}