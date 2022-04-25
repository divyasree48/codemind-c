#include<stdio.h>
int main()
{
     int n,i,arr[10000],k,s=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=n/2;
    for(i=0;i<k;i++)
    {
        s=s+arr[i];
    }
    printf("%d
",s);
    for(i=k;i<n;i++)
    {
        d=d+arr[i];
    }
    printf("%d",d);
}