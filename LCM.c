#include<stdio.h>
int main()
{
    int n,m,i,temp,min=0,hcf,lcm;
    scanf("%d%d",&n,&m);
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
            if(i>min)
            {
               min=i;
            }
        }
    }
    hcf=min;
    lcm=(m*n)/hcf;
    printf("%d",lcm);
}