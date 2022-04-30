#include<stdio.h>
int main()
{
    int n,i,arr[100],j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=arr[i];j++)
        {
            if(j*j==arr[i])
            {
                s=s+arr[i];
            }
        }
    }
    printf("%d",s);
}