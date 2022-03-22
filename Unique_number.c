#include<stdio.h>
int main()
{
    int n,d,arr[100],i=0,j,k,c=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        arr[i]=d;
        i++;
    }
    for(j=0;j<i;j++)
    {
        for(k=0;k<i;k++)
        {
            if(arr[j]==arr[k])
            {
            c++;
            }
        }
    }
    if(c==i)
    printf("Unique Number");
    else
    printf("Not Unique Number");
    
}