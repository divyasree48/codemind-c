#include<stdio.h>
int main()
{
    int i,n,arr[100],s=0,w;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&w);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=w)
        {
            s=s+1;
        }
        else
        {
            s=s+2;
        }
    }
    printf("%d",s);
}