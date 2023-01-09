#include<stdio.h>
int main()
{
    int n,c=0,max=-9999;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        c++;
        else
        c=0;
        if(c>max)
        max=c;
    }
    printf("%d",max);
}