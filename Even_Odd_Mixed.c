#include<stdio.h>
int main()
{
    int n,d,r,c=0,e=0,o=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        r=(10*r)+d;
        if(d%2==0)
        e++;
        if(d%2!=0)
        o++;
        c++;
    }
    if(c==e)
    printf("Even");
    else if(c==o)
    printf("Odd");
    else
    printf("Mixed");
}