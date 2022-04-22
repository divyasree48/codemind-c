#include<stdio.h>
int main()
{
    int a,b,j,temp,c=0,i;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    for(i=a;i<=b;i++)
    {c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d
",i);
        }
    }
}