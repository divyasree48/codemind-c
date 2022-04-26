#include<stdio.h>
void fun(int *arr,int n)
{
    int i,d=0,r,k;
    for(i=0;i<n;i++)
    {
        d=0;
        k=arr[i];
        while(arr[i])
        {
            
            arr[i]=arr[i]/10;
            d++;
        }
        if(k==0)d=1;
        printf("%d ",d);
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