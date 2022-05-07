#include<stdio.h>
int main()
{
    int n,i,arr[1000],r=0,d[100],j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        r=r*10+arr[i];
    }
    k=r+1;
    j=0;
    while(k)
    {
        d[j]=k%10;
        k=k/10;
        j++;
        
    }
    for(i=j-1;i>=0;i--)
    {
        printf("%d ",d[i]);
    }
}