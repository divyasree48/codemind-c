#include<stdio.h>
int main()
{
    int n,i,arr[1000],d,j,s=0,dc=0,k;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {d=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j]&&i!=j&&arr[i]>=0)
            {
                d++;
                arr[j]=-1;
            }
        }
        if(k==d)
        {
            dc++;
            printf("%d ",arr[i]);
        }
        
    }
    if(dc==0)
    {
        printf("-1");
    }
    
}