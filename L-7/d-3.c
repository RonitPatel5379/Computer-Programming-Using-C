#include<stdio.h>
void main()
{
    int a,b,choice;
    printf("Enter the value:");
    scanf("%d %d %d",&a,&b,&choice);
    switch(choice)
    {
    case 1: printf("addition=%d",a+b);
        break;
    case 2: printf("subtraction=%d",a-b);
        break;
    case 3: printf("multiplication=%d",a*b);
        break;
    case 4: if(b!=0)
    {
        printf("division=%d",a/b);
    }
    else
    {
        printf("division not possible");
    }
        break;
    default : {
        printf("Enter your choice(1-4):");
    }    
    }
}