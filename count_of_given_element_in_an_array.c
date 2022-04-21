#include<stdio.h>
int fun(int *arr,int n,int k)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            c++;
        }
    }
    if(c>0)
    return c;
    else
    return 0;
}
int main()
{
    int i,n,k,arr[100],s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    printf("%d",fun(arr,n,k));
}