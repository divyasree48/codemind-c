#include<stdio.h>
void fib(int n)
{
    int a,b,c,i;
    a=0;b=1;c=a+b;
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++)
    {
        printf("%d ",c);
        a=b;b=c;c=a+b;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fib(n);
}