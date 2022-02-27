#include<stdio.h>
int main()
{
    int L,B,W,C,total,park,fence,cost;
    scanf("%d %d %d %d",&L,&B,&W,&C);
    if(L>0 && B>0)
    {
        park=L*B;
        total=(L+2*W)*(B+2*W);
        fence=total-park;
        cost=fence*C;
        printf("%d",cost);
    }
    return 0;
}