#include<stdio.h>
int main()
{
    int n,rem,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    n=temp;
    if(n%sum==0)
    printf("True");
    else
    printf("False");
    return 0;
}