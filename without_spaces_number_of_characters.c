#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,d=0;
    char s[100];
    scanf("%[^
]",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]!=' ')
        {
            d++;
        }
    }
    printf("%d",d);
}