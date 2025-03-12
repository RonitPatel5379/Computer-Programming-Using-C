#include<stdio.h>
void main()
{   
    int n,reversedNum=0,digit;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
        reversedNum=reversedNum*10+temp%10;
        temp=temp/10;
    }
    printf("Number in words:");
    while(reversedNum!=0)
    {
        digit=reversedNum%10;
        switch(digit)
        {
            case 0: printf("Zero ");
                break;
            case 1: printf("One ");
                break;
            case 2: printf("Two ");
                break;
            case 3: printf("Three ");
                break;
            case 4: printf("Four ");
                break;
            case 5: printf("Five ");
                break;
            case 6: printf("Six ");
                break;
            case 7: printf("Seven ");
                break;
            case 8: printf("Eight ");
                break;
            case 9: printf("Nine ");
                break;                                
        }
        reversedNum=reversedNum/10;
    }
}