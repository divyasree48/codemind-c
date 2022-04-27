#include<stdio.h>
int main()
{
    int i,n,arr[100],d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            d++;
        }
    }
    if(d==n-1)
    {
        printf("yes");
    }
    else
    printf("no");
}