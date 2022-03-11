#include<stdio.h>
int main()
{
    int m,n,temp,hcf,lcm,max=0,i;
    scanf("%d%d",&m,&n);
    if(n<m)
    {
        temp=n;
        n=m;
        m=temp;
    }
    for(i=1;i<=m;i++)
    {
        if(n%i==0 && m%i==0)
        {
            if(i>max)
            {
                max=i;
                
            }
        }
    }
    hcf=max;
    lcm=(m*n)/hcf;
    printf("%d",lcm);
}