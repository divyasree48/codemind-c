#include<stdio.h>
int main()
{
    int n,i,arr[1000],s=0, d=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s+=arr[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]==avg)
        {
            d++;
        }
    }
    
    if(d>0)
    printf("True");
    else
    printf("False");
    return 0;
}