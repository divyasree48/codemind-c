#include<stdio.h>
int main()
{
    int r,c,i,j,arr[100][100],s=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                s=s+arr[i][j];
            }
        }
    }
    j=r-1;
    for(i=0;i<r;i++)
    {
        if(i!=j)
        
                s=s+arr[i][j];
        j--;
    }
    printf("%d",s);
}