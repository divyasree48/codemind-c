#include<stdio.h>
void fun(int n,int *arr)
{
    int i;
    for(i=0;i<=n;i++)
    {
        if(i!=n)
        printf("%d ",arr[i]);
        else
        printf("0");
    }
   
}
int main()
{
    int n,i,arr[1000],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=n-1;
    if(n%2==0)
    {
    
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
        else
        {
            fun(n,arr);
            
        }
    
}