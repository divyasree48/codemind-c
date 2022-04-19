#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,c=0,sq,pwr,last;
    scanf("%d",&n);
    t=n;
    sq=n*n;
    while(n)
    {
        n=n/10;
        c++;
    }
    n=t;
    pwr=(pow(10,c));
    last=sq%pwr;
    if(last==n)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}
