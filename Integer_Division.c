#include<stdio.h>
int main()
{
    long long int n,k,i;
    scanf("%lld",&n);
    if(n%10==0)
    {
        printf("%lld",n/10);
    }
    else if(n<0)
    {
        k=n/10;
        printf("%lld",k-1);
    }
else
{
    k=n/10;
    printf("%lld",k);
}
}