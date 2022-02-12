#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,M,r,p;
    scanf("%d%d%d",&x,&y,&M);
    p=pow(x,y);
    r=p%M;
    printf("%d",r);
    return 0;
}