#include<stdio.h>
int main()
{
    int r,c,i,j,arr[100][100],s=0,s1=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
   
    for(i=0;i<r;i++)
    {
        for(j=0;j<c-1;j++)
        {
         if(arr[i][j]>=arr[i][j+1])
         {
               break;
         }
            
        }
        if(j==c-1)
        {
            s1++;
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=c-1;j>0;j--)
        {
         if(arr[i][j]>=arr[i][j-1])
         {
               break;
         }
            
        }
        if(c>1 && j==0)
        {
            s1++;
        }
    }
    
   printf("%d",s1); 
}