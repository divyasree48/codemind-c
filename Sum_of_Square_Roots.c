#include<stdio.h>
#include<math.h>
int main(){
    int a,b,i;
    float v=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        v+=sqrt(i);
    }
    printf("%.2f",v);
}