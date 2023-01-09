#include<stdio.h>
int main()
{
    int n,k,a[100],i,j,s=0,c=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        s=a[i];
        if(a[i]==k)
            {
                c+=1;
                continue;
            }
        for(j=i+1;j<n;j++)
        {
            
            s+=a[j];
            if(s==k)
            {
                c+=1;
                break;
            }
        }
    }
    printf("%d",c);
}