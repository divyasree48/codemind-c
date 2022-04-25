#include<stdio.h>
int main()
{
     int n,i,arr[10000],k,s=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++)
    {
        if(arr[i]%2==0)
        {
            k=i;
            d++;
        }
        if(d==1)
        break;
    }
    for(i=0;i<k;i++)
    {
            s=s+arr[i];
    }
    printf("%d",s);
}