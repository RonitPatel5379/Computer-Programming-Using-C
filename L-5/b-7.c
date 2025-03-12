#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    printf("vowel=%c",ch);
    else
    printf("consonant=%c",ch);
}