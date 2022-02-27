#include<stdio.h>
int main()
{
    int n,d=0,rem;
    scanf("%d",&n);
    while(n)
    {
      rem=n%10;
      n=n/10;
      if(rem>d)
      {
          d=rem;
      }
    }
    printf("%d",d);
    return 0;
}