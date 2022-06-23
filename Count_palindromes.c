#include<stdio.h>
int fun(int *arr,int n)
{
    int i,k,r,rev=0,temp,d=0,rvs[1000];
    for(i=0,k=0;i<n;i++,k++)
    {
        rev=0;
        temp=arr[i];
        
            while(arr[i])
            {
                r=arr[i]%10;
                arr[i]=arr[i]/10;
                rev=rev*10+r;
                rvs[k]=rev;
            }
            if(temp==rvs[k])
            {
                d++;
            }
    }
 return d;
}
int main()
{
    int n,i,arr[100],l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    l=fun(arr,n);
    printf("%d",l);
}