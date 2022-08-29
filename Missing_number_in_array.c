#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        int i,n,k,s=0,arr[100];
        scanf("%d",&n);
        
        for(i=0;i<n-1;i++)
        {
            scanf("%d",&arr[i]);
        }
        k=(n*(n+1))/2;
        for(i=0;i<n-1;i++)
        s+=arr[i];
        printf("%d
",k-s);
        t-=1;
    }
}