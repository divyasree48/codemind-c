#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    static int x=0;
    
    
    scanf("%d",&t);
    while(t)
    {
        int l;
        char s[100];
        scanf("%s",s);
        l=strlen(s);
        
        for(i=1;i<strlen(s)-1;i++)
        {
            
            if((s[i]=='-' && s[i+1]=='-')||(s[i-1]=='-' && s[i]=='-'))
            {
                x-=1;
            }
            else if((s[i]=='+' && s[i+1]=='+')||(s[i-1]=='+' && s[i]=='+'))
            x+=1;
        }
        
        
        t-=1;
    }
    printf("%d",x);
}