#include <stdio.h>
void main() 
{
    int n, sum = 0, i = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (i <= n) 
    {
        sum += i * i; 
        i++; 
    }
    printf("Sum of the series: %d\n", sum);
}