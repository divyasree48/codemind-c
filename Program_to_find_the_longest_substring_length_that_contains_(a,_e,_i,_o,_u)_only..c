#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0,x=0,j,l;
    char a[100],d;
    scanf("%s",a);
    //printf("%s",s);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        c=0;
        for(j=i;j<l;j++)
        {
            d=a[j];
            if(d=='a' || d=='e' ||d=='i' ||d=='o' ||d=='u' )
            {
                c+=1;
                if(x<c)
                x=c;
            }
            else
            break;
        }
    }
    printf("%d",x);
}