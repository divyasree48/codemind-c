#include<stdio.h>
#include<string.h>
int main()
{
int i,l,c=0;
char s[100];
scanf("%[^
]",s);
l=strlen(s);
for(i=0;i<l;i++)
{
    if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='u'||s[i]=='o'||s[i]=='i'||s[i]=='e'||s[i]=='a')
    {
        c++;
    }
}
printf("%d",c);
}
