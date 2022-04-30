#include<stdio.h>
int main()
{
    char s[100];
    int i,z=0,o=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='z')
        {
            z++;
        }
        else
        {
            o++;
        }
    }
    if(2*z==o)
    printf("Yes");
    else
    printf("No");
}