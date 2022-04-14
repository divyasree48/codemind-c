#include<stdio.h>
int main()
{
    int m,n,i,temp,sum,d;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        temp=i;
        sum=0;
        while(temp>0)
        {
            d=temp%10;
            sum=(sum*10)+d;
            temp=temp/10;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}