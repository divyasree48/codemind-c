#include<stdio.h>
int main()
{
    int n1,n2,d1,d2,s1=0,s2=0,sq1,sq2,sq3;
    scanf("%d",&n1);
    sq1=n1*n1;
    while(n1)
    {
        d1=n1%10;
        n1=n1/10;
        s1=s1*10+d1;
    }
    n2=s1;
    sq2=n2*n2;
    while(sq2)
    {
        d2=sq2%10;
        sq2=sq2/10;
        s2=s2*10+d2;
    }
    sq3=s2;
    if(sq3==sq1)
    printf("True");
    else
    printf("False");
    return 0;
}