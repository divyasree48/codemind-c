#include<stdio.h>
int main()
{
    int n,i,arr[i],d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if(arr[i]%2!=0 && arr[i-1]%2==0 && arr[i+1]%2==0)
        {
            d++;
        }
    }
    printf("%d",d);
}