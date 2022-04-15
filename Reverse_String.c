#include<stdio.h>
#include<string.h>
void stringrev(char *str)
{
    int i,j,len;
    char temp;
    len=strlen(str);
    j=len-1;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    
}
int main()
{
    char str[100];
    scanf("%[^
]",str);
    stringrev(str);
    printf("%s",str);
}