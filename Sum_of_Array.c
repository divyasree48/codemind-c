#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],o=0,e=0,d,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        
            o=o+arr[i];
        
       
    }
    
    printf("%d",o);
   
}