#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,rev=0,s=0,d,dc=0,d1;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    while(rev)
    {
        dc++;
        d1=rev%10;
        rev=rev/10;
        s=s+pow(d1,dc);
    }
    n=temp;
    if(n==s)
    printf("True");
    else
    printf("False");
}