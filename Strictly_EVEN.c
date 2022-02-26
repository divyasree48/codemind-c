
#include<stdio.h>
int main()
{
    int arr[100],i,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i+=2)
    {
       if(arr[i]%2==0)
       {
           count++;
           printf("False");
       }
    }
    if(count==0)
    {
        printf("True");
    }
    return 0;
}
