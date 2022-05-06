#include<stdio.h>
#include<string.h>
int main()
{
    int m,n,i,l;
    char s[100];
    scanf("%[^
]s",s);
    scanf("%d%d",&n,&m);
    l=strlen(s);
    for(i=n;i<m+1;i++)
    {
        printf("%c",s[i]);
    }
}