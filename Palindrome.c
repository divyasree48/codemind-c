#include<stdio.h>
int main()
{
    int n,r,s=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
    r=n%10;
    n=n/10;
    s=s*10+r;
    }
if(temp==s)
printf("True");
else
printf("False");
}