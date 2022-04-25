#include<stdio.h>
int main()
{
    int n,i,arr[1000],k,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(i<k)
        {
            s=s+arr[i];
        }
    }
    printf("%d",s);
}