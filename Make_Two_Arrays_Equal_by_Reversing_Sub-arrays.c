#include<stdio.h>
int main()
{
    int n1,i,j,n2,l=0,k;
    scanf("%d",&n1);
    int arr1[n1],arr2[n1];
    for(i=0;i<n1;i++)
    scanf("%d",&arr1[i]);
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    scanf("%d",&arr2[i]);
    for(i=0;i<n1;i++)
    {k=0;
        for(j=0;j<n1;j++)
        {
            if(arr1[i]==arr2[j])
            {
                k=1;
            break;
            }
        }
        if(k==0)
        {
            l=1;
        printf("False");
        break;
        }
    }
    if(l==0)
    printf("True");
}