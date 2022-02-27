#include<stdio.h>
int main()
{
    int n,sum=0,p=1,rem;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        sum=sum+rem;
        p=p*rem;
        n=n/10;
    }
    if(sum==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
    return 0;
}