#include<stdio.h>
#include<math.h>
int main()
{
    long int n,i=0,d=0,b=0;
    scanf("%ld",&n);
    while(n)
    {
        d=d+((n%10)*pow(8,i));
        n=n/10;
        i++;
    }
    i=1;
    while(d)
    {
        b=b+((d%2)*i);
        d=d/2;
        i*=10;
    }
   printf("%ld",b); 
}