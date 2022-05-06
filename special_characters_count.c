#include<stdio.h>
#include<string.h>
int main()
{
    int w=0,k=0,i,l;
    char str[10000];
    scanf("%[^
]s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if((str[i]>=97 && str[i]<=122)||(str[i]>=65 && str[i]<=90))
        {
            w++;
        }
        if(str[i]==' ')
        {
            k++;
        }
    }
    printf("%d",l-k-w);
}