#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
    printf("%c=uppercase",ch);
    }
    else if(ch>='a' && ch<='z')
    {
    printf("%c=lowercase",ch);
    }
    else if(ch>='0' && ch<='9')
    {
    printf("%c=digit",ch);
    }
    else
    {
    printf("%c=symbol/special character",ch);
    }
}