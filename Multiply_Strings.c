#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s1[10],s2[10];
    long int a,b;
    scanf("%s%s",s1,s2);
    a=atoi(s1);
    b=atoi(s2);
    printf("%ld",a*b);
}