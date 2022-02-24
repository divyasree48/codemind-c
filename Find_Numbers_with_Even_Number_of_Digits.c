#include<stdio.h>
#include<math.h>
int main()
{
    int arr[100],i,n,k,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        k=(int)log10(arr[i])+1;
        if(k%2==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}