#include<stdio.h>
int fun(int i)
{
    int temp,rem,r;
    temp=i;
    r=0;
    while(i)
    {
        rem=i%10;
        r=r*10+rem;
        i=i/10;
    }
    if(r==temp)
    return 1;
   return 0; 
}
int main()
{
    int n,i,j,t,k;
    scanf("%d",&n);
    for(i=n-1;i>0;i--)
    {
        if(fun(i))
        {
            k=i;
            break;
        }
    }
    for(j=n+1;j<10000;j++)
    {
        if(fun(j))
        {
            t=j;
            break;
        }
    }
    if(t-n==(n-k))
    {
        printf("%d %d",k,t);
    }
    else
    {
        printf("%d",k);
    }
}