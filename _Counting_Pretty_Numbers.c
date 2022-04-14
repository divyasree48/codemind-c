#include<stdio.h>
int main()
{
    int t,a,b,cnt=0,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        cnt=0;
        for(j=a;j<=b;j++)
        {
            if(j%10==2||j%10==3||j%10==9)
            {
                cnt++;
            }
        }    
        printf("%d
",cnt);
    }
}