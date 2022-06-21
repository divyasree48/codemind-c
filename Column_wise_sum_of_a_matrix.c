#include<stdio.h>
int main()
{
    int r,c,i,j,arr[100][100],s=0,s1=0,max=-999,max1=-999;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
   for(j=0;j<c;j++)
   {
       s=0;
       for(i=0;i<r;i++)
       {
           s+=arr[i][j];
       }
      printf("%d ",s);
   }
   
}