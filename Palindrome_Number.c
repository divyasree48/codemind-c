#include<stdio.h>
int reverse(int num)
{
    int d,r=0;
    while(num)
    {
        d=num%10;
        num=num/10;
        r=(r*10)+d;
    }
    return r;
}
int main()
{
    int arr[100],i,n,r=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        r=reverse(arr[i]);
        if(r==arr[i])
        printf("True
");
        else
        printf("False
");
    }
    
}