#include<stdio.h>
#include<string.h>
int main()
{
    int c=1,i,len;
    char s[100];
    scanf("%[^
]s",s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
}