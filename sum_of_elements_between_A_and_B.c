#include<stdio.h>
int main()
{
    int a,b,n,arr[1000],i,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a&&arr[i]<=b)
        {
            d=d+arr[i];
       }
    }
   
    
     printf("%d",d);
}