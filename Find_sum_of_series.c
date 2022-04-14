#include<stdio.h>
int main()
{
    int n,i;
    float r=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r+=(float)1/i;
    }
    printf("%.2f",r);
}