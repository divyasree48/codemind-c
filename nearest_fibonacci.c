#include<stdio.h>
int * fun(int n)
{
    int a=0,b=1,c=a+b,i=3;
    static int arr[2];
    while(c<n)
    {
        arr[0]=c;
        a=b;
        b=c;
        c=a+b;
    }
    arr[1]=c;
    return arr;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int *p=fun(n);
   if(n-p[0]==p[1]-n)
        printf("%d %d",p[0],p[1]);
    else if(n-p[0]>p[1]-n)
        printf("%d",p[1]);
    else if(n-p[0]<p[1]-n)
        printf("%d",p[0]);
    return 0;
}