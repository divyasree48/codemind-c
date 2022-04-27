#include<stdio.h>
int main()
{
    int i,n,arr[100],c=0,brr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=n/2;i--)
    {
        brr[c]=arr[i];
        c++;
    }
    for(i=0;i<n/2;i++)
    {
        brr[c]=arr[i];
        c++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",brr[i]);
    }
}