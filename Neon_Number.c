#include<stdio.h>
int main()
{
    int n,sum=0,rem,num;
    scanf("%d",&num);
    n=num*num;
    while(n)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    if(num==sum)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}