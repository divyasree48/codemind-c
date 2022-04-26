#include<stdio.h>
void fun(int *arr,int n)
{
    int i,j,r,rev=0,rvs[100];
    
    for(i=0;i<n;i++)
    {rev=0;
        while(arr[i])
        {
            r=arr[i]%10;
            arr[i]=arr[i]/10;
            rev=rev*10+r;
            rvs[i]=rev;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",rvs[i]);
    }
    
}
int main()
{
     int n,i,arr[10000],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    fun(arr,n);
    
}