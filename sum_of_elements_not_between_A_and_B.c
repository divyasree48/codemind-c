#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],d=0,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            d=d+arr[i];
        }
    }
    printf("%d",d);
}