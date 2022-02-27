#include<stdio.h>
int main()
{
    int a[100],i,hcf,n,j=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    hcf=a[0];
    while(j<n)
    {
        if(a[j]%hcf==0)
        {
            j++;
        }
        else
        {
            hcf=a[j]%hcf;
        }
    }
    printf("%d",hcf);
    return 0;
}