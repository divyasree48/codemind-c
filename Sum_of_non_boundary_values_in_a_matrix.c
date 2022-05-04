#include<stdio.h>
int main()
{
    int r,c,i,j,arr[1000][1000],s=0,s1=0;
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
            s=s+arr[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==0 || j==0 ||i==r-1 || j==c-1)
            {
                s1=s1+arr[i][j];
            }
        }
    }
    
    printf("%d",s-s1);
    
    
}