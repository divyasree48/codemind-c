#include<stdio.h>
int main()
{
    int n,i,arr[1000],s=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s+=arr[i];
    }
    avg=(float)s/n;
    printf("%.2f",avg);
    return 0;
}