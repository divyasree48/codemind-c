#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,arr[100],l,m=-1,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        if(arr[i]==1)
            sum=1;
        else
            sum=-1;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]==0)
            sum+=-1;
        else
            sum+=1;
            if(sum==0)
            {
                if(j-i+1>m)
                {
                    l=i;
                    m=j-i+1;
                }
            }
        }
    }
    if(m==-1)
    printf("-1");
    else
    printf("%d %d",l,l+m-1);
}