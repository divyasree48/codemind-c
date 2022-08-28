#include<stdio.h>
#include<string.h>
int main()
{
    int n,k=0;
    scanf("%d",&n);
    char c[100];
    scanf("%s",c);
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]=='H'&&c[i+1]=='H')
        {
            k=1;
        }
        else
        {
            if(c[i]=='.')
            c[i]='B';
        }
    }
    if(k==1)
    {
    printf("NO
");
    }
    else
{
    printf("YES
");
    printf("%s",c);
}
}