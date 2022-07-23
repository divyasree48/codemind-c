#include<stdio.h>
void palin(int n){
    int temp,r=0,rem,s=0,rm,rev,k;
    temp=n;
    r=0;
    s=0;
    while(n)
    {
        rem=n%10;
        r=r*10+rem;
        n/=10;
    }
    s=temp+r;
    k=s;
    rev=0;
    while(s)
    {
        rm=s%10;
        rev=rev*10+rm;
        s/=10;
    }
    if(rev==k)
    {
        printf("%d",rev);
    }
    else
    {
        palin(rev);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    palin(n);
}