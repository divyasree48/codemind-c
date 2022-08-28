#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        int i,n,j,k=0,l=0;
        char s[100],c;
        scanf("%d",&n);
        scanf("%s",s);
        //printf("%s  ",s);
        for(i=0;i<n;i++)
        {k=0;
            c=s[i];
            //printf("%c ",c);
            //printf("%s",s);
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                if(s[j]==c)
                {
                    
                    k+=1;
                    break;
                }
                }
            }
            if(k==0)
            {
                l+=1;
            printf("%c
",c);
            break;
            }
        }
        if(l==0)
        printf("-1
");
        t-=1;
    }
    
}