#include<stdio.h>
int main()
{
    int r,c,i,j,arr[100][100],s=0,s1=0,brr[100][100],d=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (i%2==0)
            {
                s1+=arr[i][j];
                
            }
        }
    }
    printf("%d ",s1);
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (i%2!=0)
            {
                s+=arr[i][j];
                
            }
        }
    }
    printf("%d",s);
}