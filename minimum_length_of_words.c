#include<stdio.h>
#include<string.h>
int main()
{
    char string[1000],shortest[30],longest[50];
    int count=0,min,i,j,length,index=0;
    scanf("%[^
]",string);
    length=strlen(string);
    index=0;
    min=100;
    for(i=0;i<length;i++)
    {
        if(string[i]!=' ')
        {
            count++;
        }
        else
        {
            if(count<min)
            {
                min=count;
                index=i-min;
            }
            count=0;
        }
    }
    if(count<min)
    {
        min=count;
        index=length-min;
        
    }
    j=0;
    for(i=index;i<index+min;i++)
    {
        shortest[j]=string[i];
        j++;
    }
    longest[j]=NULL;
    printf("%d",min);
    return 0;
    
}