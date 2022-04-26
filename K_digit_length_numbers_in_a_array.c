#include<stdio.h>
int fun(int *arr,int n,int k)
{
    int i,d=0,r,c=0,g;
    for(i=0;i<n;i++)
    {d=0;
    
    g=arr[i];
        while(arr[i])
        {
            r=arr[i]%10;
            arr[i]=arr[i]/10;
            d++;
        }
        if(g==0)d=1;
        if(d==k)
        {
            c++;
       
        }
    }
    return c;
}
int main()
{
    int n,i,k,s,arr[100];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    s=fun(arr,n,k);
    printf("%d",s);
}