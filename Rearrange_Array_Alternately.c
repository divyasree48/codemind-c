#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    while(t)
    {
        int n,j,k,arr[1000],rev[1000],l[1000],y=0,x=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
       for(j=n-1;j>=0;j--)
       {
           rev[x]=arr[j];
           x++;
       }
        for(k=0;k<n;k++)
        {
            if(k%2==0)
            {
                l[y]=rev[k/2];
                y++;
            }
            else if(k%2==1)
            {
                l[y]=arr[k/2];
                y++;
            }
        }
    
        for(j=0;j<n;j++)
        {
            if(j<n-1)
            printf("%d ",l[j]);
            if(j==n-1)
            {
                printf("%d
",l[j]);
            }
        }
        t--;
    }
}