#include<stdio.h>
int main()
{
    long int n;
    int a,c=0;
    scanf("%ld",&n);
    a=n;
    while(n)
    {
        c++;
        n=n/10;
    }
    if(c==10)
    {
        if(a%1000000000==0)
        printf("Invalid");
        else
        printf("Valid");
    }
    else
    printf("Invalid");
    
}