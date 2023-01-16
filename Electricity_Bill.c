#include<stdio.h>
int main()
{
    int n;
    float a,b;
    scanf("%d",&n);
    printf("Units Consumed: %d
",n);
    if(n<=199)
    a=1.20;
    else if(n>=200 && n<400)
    a=1.40;
    else if(n>=400 && n<600)
    a=1.60;
    else if(n>=600 and n<800)
    a=1.80;
    else
    a=2.00;
    printf("Cost per Unit: %.2f
",a);
    printf("Bill: %.2f
",n*a);
    
    if(n*a>400)
    b=(15*n*a)/100;
    else
    b=0.00;
    printf("Surcharge: %.2f
",b);
    printf("Total Amount: %.2f
",(n*a)+b);
    
}