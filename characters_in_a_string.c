#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,d=0;
    char s[1000];
    scanf("%[^
]s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        
        d++;
    }
    printf("%d",d);
}