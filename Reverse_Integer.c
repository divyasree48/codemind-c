#include<stdio.h>
int main()
{
    int n,rem,r=0;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        n=n/10;
        r=r*10+rem;
    }
    printf("%d",r);
    return 0;
}