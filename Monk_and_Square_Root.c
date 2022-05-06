#include<stdio.h>
int main()
{
   long long int t,i,a=-1,n,m;
   scanf("%lld",&t);
   while(t)
   {
    scanf("%lld%lld",&n,&m);
    a=-1;
    for(i=0;i<=m;i++)
    {
        if((i*i)%m==n)
        {
            a=i;
            break;
        }
    }
    printf("%lld
",a);
    t--;
   }
   
}