#include<stdio.h>
#include<ctype.h>
int main()
{
    char c[100],chr;
    int i=0;
    scanf("%[^
]s",c);
    while(c[i])
    {
        chr=c[i];
        printf("%c",tolower(chr));
        i++;
    }
    
}