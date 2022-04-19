#include<stdio.h>
int main()
{
    int n,i,d=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(i*i==n)
        {
            d++;
        }
    }
    if(d>0)
    printf("True");
    else
    printf("False");
}