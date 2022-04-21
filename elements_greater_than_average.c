#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],a,s=0,d=0, avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=avg)
        {
            d++;
        }
    }
    printf("%d",d);
}