#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,dis,r1,r2;
    printf("Enter the values of a,b&c:");
    scanf("%f %f %f",&a,&b,&c);
    dis=b*b-4*a*c;
    if(dis>0)
    {
        r1=(-b+sqrt(dis))/2*a;
        r2=(-b-sqrt(dis))/2*a;
        printf("both roots are real & different");
    }
    else if(dis==0)
    {
        r1=r2=-b/(2*a);
        printf("both roots are same & real");
    }
    else
    {
        float realpart=-b/(2*a);
        float imaginarypart=sqrt(-dis)/(2*a);
        printf("roots are complex & different");
    }
    printf("%f %f\n",r1,r2);
}