#include<stdio.h>
int main()
{
    int n,i,arr[100],f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if(arr[i]+arr[i-1]==arr[i+1])
        {
            f=1;
        }
        else
        {
            f=0;
            break;
        }
    }
    if(f==0)
    printf("no");
    else
    printf("yes");
}