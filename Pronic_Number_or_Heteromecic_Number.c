#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if((i+1)*i==n)
        {
            c++;
        }
    }
    if(c>0)
    printf("YES");
    else
    printf("NO");
}