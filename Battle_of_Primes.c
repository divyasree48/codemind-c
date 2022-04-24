#include<stdio.h>
int isprime(int s2)
{
    int i;
    for(i=2;i<s2;i++)
    {
        if(s2%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int fun(int s1)
{
    int i,s2;
    for(i=1;i<=10;i++)
    {
        s2=s1+i;
        if(isprime(s2))
        return i;
    }
}
int main()
{
    int a,b,c,s1,k,s2;
    scanf("%d%d",&a,&b);
    s1=a+b;
    k=fun(s1);
    printf("%d",k);
}