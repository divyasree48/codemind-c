#include<stdio.h>
int main()
{
    int i,n,arr[100],k,s=0,l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    if(arr[0]>k)
    {
        for(i=n-1;i>=0;i--)
        {
            if(arr[i]==k)
            {
                s=s+1;
                l=i;
                break;
            }
        }
    }
    else if(arr[0]<k)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]==k)
            {
                s=s+1;
                l=i;
                break;
            }
        }
    }
    if(s==0)
    printf("-1");
    else
    printf("%d",l);
    
}