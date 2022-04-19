#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq,s=0,r;
    scanf("%d",&n);
    sq=n*n;
    while(sq)
    {
        r=sq%10;
        sq=sq/10;
        s+=r;
    }
    
    if(s==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}