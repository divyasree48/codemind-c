#include<stdio.h>
int main()
{
    int n,i,j,k=1,arr[100],arr1[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        k=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                k=k*arr[j];
            }
        }
        arr1[i]=k;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
}