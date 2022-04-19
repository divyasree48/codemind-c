#include<stdio.h>
int main()
{
    int m,n,i,cm=0,cn=0;
    scanf("%d%d",&m,&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            cm+=i;
        }
    }
     for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            cn+=i;
        }
    }
    if(cm==m && cn==n)
    printf("Amicable");
    else
    printf("Not Amicable");

}