#include<stdio.h>
int main()
{
    char c[100];
    int i,cnt=0;
    scanf("%[^
]s",c);
    for(i=0;c[i]!=NULL;i++)
    {
        if(c[i]>='0'&&c[i]<='9')
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        printf("Doesn't contain digit");
    }
    else
    {
        printf("Contains %d digit",cnt);
    }
    
}