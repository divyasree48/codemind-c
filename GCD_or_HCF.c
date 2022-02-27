#include<stdio.h>
int main()
{
    int N,M,min,i,hcf=1;
    scanf("%d %d",&N,&M);
    min=N>M?M:N;
    for(i=2;i<=min;i++)
    {
        if(N%i==0 && M%i==0)
        {
            hcf=i;
        }
    }
    printf("%d
",hcf);
    return 0;
}