#include<stdio.h>
#include<math.h>
int lcm(int a,int b)
{
    int i,l;
    if(a>b)
    l=a;
    else
    l=b;
    while(1)
    {
        if(l%a==0 && l%b==0)
        {
            break;
        }
        else
        {
            if(a>b)
            l+=a;
            else
            l+=b;
        }
    }
    return l;
}
int main()
{
    int n,i,arr[1000],l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    l=lcm(arr[0],arr[1]);
    for(i=2;i<n;i++)
    {
        l=lcm(l,arr[i]);
    }
    printf("%d",l);
}