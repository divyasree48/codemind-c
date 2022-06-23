#include<stdio.h>
int fun(int *arr,int n)
{
    int s=0,r,i;
    for(i=0;i<n;i++)
    {
        while(arr[i])
        {
        r=arr[i]%10;
        arr[i]=arr[i]/10;
        s+=r;
        }
    }
   printf("%d",s);
}
int main()
{
    int n,i,l,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    l=fun(arr,n);
   
}