#include<stdio.h>
void fun(int *arr,int n)
{
    int i,d=0,j,c=0,s=0;
    float avg;
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
        s=s+arr[i];
        c++;
        }
    }
    avg=(float)s/c;
    printf("%.2f",avg);
}
int main()
{
    int n,i,j,k,arr[100],c,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    fun(arr,n);
    
    
}