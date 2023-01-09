#include<stdio.h>
int main()
{
    int n,i,max=-9999,s;
    scanf("%d",&n);
    int arr[n],j;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {s=0;
        for(j=i;j<n;j++)
        {
            s+=arr[j];
            if(s>max)
            {
                max=s;
            }
        }
    }
    printf("%d",max);
}