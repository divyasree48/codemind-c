#include<stdio.h>
int ishappy(int n)
{
    int sum=0,rem=0;
    while(n)
    {
        rem=n%10;
        n=n/10;
        sum=sum+(rem*rem);
    }
    return sum;
}
int main()
{
    int n,res,d;
    scanf("%d",&n);
    res=n;
    while(res!=1 && res!=4)
    {
        res=ishappy(res);
    }
    if(res==1)
    printf("True");
    else
    printf("False");
}

