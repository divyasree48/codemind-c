#include<stdio.h>
int fun(int x,int y,int z)
{
    int i;
    for(i=x;i<=y;i++)
    {
        if(i==z)
        return 1;
    }
    return 0;
}
int main()
{
    int n1,i,c=0;
    scanf("%d",&n1);
    int arr1[1000];
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int n2;
    scanf("%d",&n2);
    int arr2[1000];
    for(i=0;i<n2;i++)
    scanf("%d",&arr2[i]);
    int q;
    scanf("%d",&q);
    for(i=0;i<n1;i++)
    {
        if(fun(arr1[i],arr2[i],q))
        c++;
    }
    printf("%d",c);
}