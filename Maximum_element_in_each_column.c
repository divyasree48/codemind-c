#include<stdio.h>
int main()
{
    int r,c,i,j,max=-9999,arr[1000][1000];
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {max=-9999;
        for(j=0;j<r;j++)
        {
            if(max<arr[j][i])
            {
                max=arr[j][i];
            }
        }
        printf("%d
",max);
    }
}