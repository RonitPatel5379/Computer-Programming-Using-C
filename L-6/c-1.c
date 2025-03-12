#include<stdio.h>
void main()
{
    int a,b,result,choice;
    printf("Select an operation to perform:\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    if(choice==1)
    {
        result=a+b;
        printf("Result=%d\n",result);
    }
    else if(choice==2)
    {
        result=a-b;
        printf("Result=%d\n",result);
    }
    else if(choice==3)
    {
        result=a*b;
        printf("Result=%d\n",result);
    }
    else
    {
        result=a/b;
        printf("Result=%d",result);
    }
}