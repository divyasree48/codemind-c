#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,c=0;
    char s[1000];
    scanf("%[^
]",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            c++;
        }
    }
    printf("%d",c);
}