#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(i*i==n)
        count++;
    }
    if(count==1)
    {
        printf("True");
    }
    else
    printf("False");
    return 0;
}