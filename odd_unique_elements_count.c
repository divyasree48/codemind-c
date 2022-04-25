#include<stdio.h>
int main()
{
    int n,i,arr[1000],d=0,j,s=0,dc=0,k;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {d=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j]&&i!=j&&arr[i]>0)
            {
                d++;
                
            }
        }
        if(d==0)
        {
            if(arr[i]%2!=0)
            {
                dc++;
            }
        }
        
    }
    printf("%d",dc);
    
}