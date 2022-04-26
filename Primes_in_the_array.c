#include<stdio.h>
int fun(int *arr,int n)
{
    int i,d=0,j,c=0;
    for(i=0;i<n;i++)
    {d=0;
    if(arr[i]==1)
    d=1;
        for(j=2;j<arr[i];j++)
        {
            
         if(arr[i]%j==0)
            {
                d++;
            }
        }
        if(d==0)
        
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int n,i,j,arr[100],c,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    c=fun(arr,n);
    
    printf("%d",c);
}