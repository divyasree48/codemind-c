#include<stdio.h>
int main()
{
    int n,i,arr[1000],d,j,s=0,dc=0,k,max=-9999,min=9999,arr1[1000];
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
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
        if(d==arr[i])
        {
            
            
            dc++;
        }
    }
    
        printf("%d ",dc);
        
}