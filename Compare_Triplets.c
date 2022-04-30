#include<stdio.h>
int main()
{
    int a[3],b[3],arr1[2],i,s1=0,s2=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
     for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            s1++;
        }
        else if(a[i]==b[i])
        {
            continue;
        }
        else
        {
            s2++;
        }
    }
    arr1[0]=s1;
    arr1[1]=s2;
    for(i=0;i<2;i++)
    {
        printf("%d ",arr1[i]);
    }
}