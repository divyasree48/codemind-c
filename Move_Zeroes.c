#include<stdio.h>
int main()
{
    int n,i,arr[100],j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[k]=arr[i];
            k++;
        }
    }
    for(j=0;j<k;j++)
    {
        printf("%d ",arr[j]);
    }
    for(j=k;j<n;j++){
        printf("0 ");
    }
    
}