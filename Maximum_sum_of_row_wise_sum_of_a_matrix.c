#include<stdio.h>
int main()
{
    int i,j,r,c,arr[100][100],max=-999,s=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {s=0;
        for(j=0;j<c;j++)
        {
            s=s+arr[i][j];
        }
        if(s>max)
        {
            max=s;
        }
    }
    printf("%d",max);
}