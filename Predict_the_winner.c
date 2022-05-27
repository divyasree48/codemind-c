#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,x=0,y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            x+=arr[i];
        }
        else
        {
            y+=arr[i];
        }
    }
    if(abs(x-y)%4==0)
    {
        printf("X");
    }
    else
    printf("Y");
}