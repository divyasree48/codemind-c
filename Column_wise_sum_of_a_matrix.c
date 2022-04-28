#include<stdio.h>
int main()
{
    int r,c,i,j,arr[100][100],d=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {d=0;
        for(j=0;j<r;j++)
        {
            d+=arr[j][i];
        }
        printf("%d ",d);
    }
}