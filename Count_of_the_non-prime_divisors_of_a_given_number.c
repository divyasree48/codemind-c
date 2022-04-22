#include<stdio.h>
int main()
{
    int i,n,d=0,c=0,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    d++;
                }
            }
            if(d!=2)
            {
                c++;
            }
        d=0;
        }
    }
    printf("%d",c);
}