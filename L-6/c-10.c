#include<stdio.h>
#include<math.h>
void main()
{
    int red,green,blue,White,Cyan,Magenta,Yellow,Black;
    printf("enter the value of red between 0 to 255:");
    scanf("%d",&red);
    printf("enter the value of green between 0 to 255:");
    scanf("%d",&green);
    printf("enter the value of blue between 0 to 255:");
    scanf("%d",&blue);
    printf("before convert RGB into CMYK\n");
    White=Max(red/255,green/255,blue/255);
    Cyan=(White-red/255)/White;
    Magenta=(White-green/255)/White;
    Yellow=(White-blue/255)/White;
    Black=1-White;
    printf("your cyan value is:%d\n",Cyan);
    printf("your magenta value is:%d\n",Magenta);
    printf("your yellow value is:%d\n",Yellow);
    printf("your black value is:%d\n",Black);
}


// float Max(float r, float g, float b){
//     float max=0;
//     if(r>g)
//         max=r;
//     else
//         max=g;

//     if(max<b)
//         max=b;
    
//     return max;
// }