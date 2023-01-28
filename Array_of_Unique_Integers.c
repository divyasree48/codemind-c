#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int min=9999,i,max=-9999;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    int d=0;
    float c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=max && arr[i]!=min)
        {
            c+=arr[i];
            d+=1;
        }
    }
    printf("%.5f",c/d);
}