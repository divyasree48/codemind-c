#include<stdio.h>
int main()
{
    int n,f=1,i,j,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        f=1;
        for(j=1;j<=n;j++)
        {
            f=f*j;
        }
        printf("%d
",f);
    }
}