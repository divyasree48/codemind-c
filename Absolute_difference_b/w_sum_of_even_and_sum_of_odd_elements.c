#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],o=0,e=0,d,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            o=o+arr[i];
        }
        if(arr[i]%2!=0)
        {
            e=e+arr[i];
        }
    }
    d=(o-e);
    if(d>0)
    printf("%d",d);
    else
    printf("%d",abs(d));
}