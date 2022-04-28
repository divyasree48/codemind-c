#include<stdio.h>
int main()
{
    int i,n,j,arr[100],c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {c=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j]&&i!=j&&arr[j]!=-1)
            {
                c++;
                arr[j]=-1;
                
            }
        }
        if(arr[i]!=-1)
        printf("%d %d ",arr[i],c);
    }
    
}