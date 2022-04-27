#include<stdio.h>
int main()
{
    int n,arr[100],i,e=0,o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            e++;
        }
        if(arr[i]%2!=0)
        {
            o++;
        }
    }
    printf("%d %d",e,o);
}