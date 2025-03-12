#include<stdio.h>
#include<time.h>
void main()
{
    time_t t;
    time(&t);
    ctime(&t);
    printf("%s",ctime(&t));
}