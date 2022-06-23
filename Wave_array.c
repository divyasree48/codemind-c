#include<stdio.h>
int fun(int *arr,int n)
{
    int i,k=0;
    if(arr[1]>arr[0] && arr[1]>arr[2])
    {
        for(i=1;i<n-1;i+=2)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                k=1;
            }
            else
            {
                k=0;
                break;
            }
        }
        if(k==1 && n%2==0)
        {
            if(arr[n-1]<=arr[n-2])
            {
                k=0;
            }
        }
    }
    else if(arr[1]<arr[0] && arr[1]<arr[2])
    {
        for(i=1;i<n-1;i+=2)
        {
            if(arr[i]<arr[i-1] && arr[i]<arr[i+1])
            {
                k=1;
            }
            else
            {
                k=0;
                break;
            }
        }
        if(k==1 && n%2==0)
        {
            if(arr[n-1]>=arr[n-2])
            {
                k=0;
            }
        }
    }
    return k;
}
int main()
{
    int i,n,d=0,arr[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(fun(arr,n))
    {
        printf("yes");
    }
    else
    printf("no");
}