#include<stdio.h>
int main()
{
    int n,i,arr[100],j,k;
    scanf("%d",&n);
    i=0;
    while(n>0)
    {
        arr[i]=n%10;
        n=n/10;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        if(arr[j]==6)
        {
            arr[j]=9;
            break;
        }
    }
    for(k=i-1;k>=0;k--)
    {
        printf("%d",arr[k]);
    }
}