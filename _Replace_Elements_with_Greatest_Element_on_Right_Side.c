#include<stdio.h>
int main()
{
    int n,i,max=-9999,k=0,j;
    scanf("%d",&n);
    int arr[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(i==n-1)
        b[k++]=-1;
        else
        {max=-9999;
            for(j=i+1;j<n;j++)
            {
                if(arr[j]>max)
                {
                    max=arr[j];
                }
            }
            b[k++]=max;
        }
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

}