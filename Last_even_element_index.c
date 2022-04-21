#include<stdio.h>
int fun(int *arr,int n)
{
    int i,c=0,k;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            k=i;
        }
    }
    return k;
    
}
int main()
{
    int i,n,arr[100],s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("%d",fun(arr,n));
}