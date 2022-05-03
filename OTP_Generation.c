#include<stdio.h>
int main()
{
    int n,r,rev=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    while(rev)
    {
        r=rev%10;
        rev=rev/10;
        if(r%2==0)
        continue;
        else
        printf("%d",r*r);
    }
}