#include<stdio.h>
void fun(char *t)
{
    int i,j,h1,h2,hh;
    h1=t[0]-'0';
    h2=t[1]-'0';
    hh=((h1*10)+h2);
    if(t[6]=='A' || t[6]=='a')
    {
        if(hh==12)
        {
            printf("00");
            for(i=2;i<5;i++)
            {
                printf("%c",t[i]);
            }
        }
    else
    {
        for(i=0;i<5;i++)
        {
            printf("%c",t[i]);
        }
    }
    }
    else
    {
        if(hh==12)
        {
            printf("12");
            for(i=2;i<5;i++)
            {
               printf("%c",t[i]); 
            }
        }
        else
        {
            hh=hh+12;
            printf("%d",hh);
            for(i=2;i<5;i++)
            {
                printf("%c",t[i]);
            }
        }
    }
}
int main()
{
    char str[8];
    scanf("%[^
]s",str);
    fun(str);
}