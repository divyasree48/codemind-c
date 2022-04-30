#include<stdio.h>
int main()
{
    int arr[100][100],i,j,r,s=0,s1=0;
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i==j)
            {
                s=s+arr[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",s);
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            if(i==r-j-1)
            {
                s1=s1+arr[i][j];
            }
        }
    }
    printf("Secondary Diagonal:%d
",s1);
}