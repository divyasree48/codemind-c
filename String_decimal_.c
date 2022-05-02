#include<stdio.h>
#include<string.h>
int main()
{
   int t,flag=0,i;
   char str[100];
   scanf("%d",&t);
   while(t>0)
   {
       scanf("%s",str);
       flag=0;
       for(i=0;str[i]!=NULL;i++)
       {
           if(str[i]<'0' || str[i]>'9')
           {
               flag=1;
               break;
           }
       }
       if(flag==1)
       printf("False
");
       else
       printf("True
");
       t--;
   }
}