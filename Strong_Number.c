#include<stdio.h>
#include<math.h>
int fact(int r)
{
    int i,f=1;
    for(i=1;i<=r;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,temp,r,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        r=n%10;
        sum=sum+fact(r);
        n=n/10;
    }
    if(sum==temp)
    printf("The number %d is a strong number",temp);
    else
    printf("The number %d is not a strong number",temp);
}