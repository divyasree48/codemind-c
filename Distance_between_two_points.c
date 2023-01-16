#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float e;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    e=pow((pow(a-c,2)+pow(b-d,2)),0.5);
    printf("%.4f",e);
    
}