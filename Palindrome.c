#include<stdio.h>
int main()
{
    int n,rem,r=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        rem=n%10;
        r=r*10+rem;
        n=n/10;
    }
    n=temp;
    if(r==n)
    printf("True");
    else
    printf("False");
    return 0;
}