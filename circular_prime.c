#include<stdio.h>
int main()
{
    int n,rev=0,temp,r,d=0,f,i,j,g,d1=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    n=temp;
    for (i=2;i<n;i++)
    {
        if(n%i==0)
        {
            d++;
        }
    }
    if (d==0)
    {
        f=1;
    }
    for(j=2;j<rev;j++)
    {
        if(rev%j==0)
        {
            d1++;
        }
    }
    if(d1==0)
    {
        g=1;
    }
    if(g==1 && f==1)
    {
        printf("circular prime");
    }
    else if(f==1 && g!=1)
    {
        printf("prime but not a circular prime");
    }
    else
    {
        printf("not prime");
    }
}