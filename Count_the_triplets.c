#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t)
    {
        int n,arr[1000],j,c=0,k,l=-1,m;
        scanf("%d",&n);
        c=0;
        l=-1;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(m=0;m<n;m++)
        {
            for(j=0;j<n;j++)
            {
                if(m!=j)
                {
                    for(k=0;k<n;k++)
                    {
                        if(arr[m]+arr[j]==arr[k])
                        {
                            c+=1;
                        }
                    }
                }
            }
        }
        if(c==0)
        {
        printf("%d
",l);
        }
        if(c>0)
        {
        printf("%d
",c/2);
        }
        t--;
    }
}