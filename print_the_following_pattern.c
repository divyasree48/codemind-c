#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            
            printf("%d ",j+1);
            
        }
        printf("
");
    }
}