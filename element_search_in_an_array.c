#include<stdio.h>
int fun(int *arr,int n,int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int i,n,k,arr[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    if(fun(arr,n,k))
    printf("True");
    else
    printf("False");
}