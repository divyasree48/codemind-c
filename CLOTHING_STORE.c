#include<stdio.h>
int main()
{
    int n,i,arr[100],j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(arr[i]==arr[j]&&i!=j&&arr[i]>0)
        {
            c++;
            arr[j]=-1;
            break;
        }
        }
    }
    printf("%d",c);
}