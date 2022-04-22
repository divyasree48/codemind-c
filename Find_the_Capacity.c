#include<stdio.h>
int main()
{
    int t,s,b,m,s1,b1,c;
    scanf("%d%d%d",&t,&s,&b);
    s1=t*s;
    b1=s1*b;
    m=b1*512*2;
    c=m/1024;
    printf("%dKB",c);
}