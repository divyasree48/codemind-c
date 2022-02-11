#include<stdio.h>
int main()
{
    int L,B,W,C,total,area,fence,cost;
    scanf("%d %d %d %d",&L,&B,&W,&C);
    if((L-(2*W))>0 && (B-(2*W)>0))
    {
        total=L*B;
        area=(L-2*W)*(B-2*W);
        fence=total-area;
        cost=fence*C;
        printf("%d",cost);
    }
    else
    printf("Impossible");
    return 0;
}