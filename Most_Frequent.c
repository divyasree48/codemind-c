#include<stdio.h>
int main()
{
    int n,i,c,k,max=-9999;
    scanf("%d",&n);
    int arr[n],j;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {c=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            c+=1;
        }
        if(c>=max)
        {
            if(c==max)
            {
                if(arr[i]<k)
                {
                    k=arr[i];
                }
            }
            else
            {
                max=c;
                k=arr[i];
            }
        }
    }
    printf("%d",k);
}