#include<stdio.h>
int main()
{
    int n,rem,s,p=1,sum=0;
    scanf("%d",&n);
    while(n)
    {
       rem=n%10;
       p=p*rem;
       sum=sum+rem;
       s=p-sum;
       n=n/10;
    }
    printf("%d",s);
    return 0;
}