#include<stdio.h>
#include<string.h>
int main()
{
 int i,l,c=0;
 char s[100];
 scanf("%[^
]",s);
 for(i=0;s[i]!=NULL;i++)
 {
     if (s[i]>='A'&&s[i]<='Z')
     {
         c++;
     }
 }
 printf("%d",c);
}