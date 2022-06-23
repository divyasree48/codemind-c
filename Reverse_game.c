#include<stdio.h>
void fun(int *arr,int n)
{
    int i,j,rvs[100],r,rev=0;
    for(i=0;i<n;i++)
    {
        rev=0;
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
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    fun(arr,n);
}