#include<stdio.h>
int main()
{
    int a,b,hcf,res;
    printf("Enter Your First Number=");
    scanf("%d",&a);
    printf("\nEnter Your Second Number=");
    scanf("%d",&b);
    hcf=(a<b)?a:b;
    for(int i=1;i<=hcf;i++)
    {
        if(a%i==0 && b%i==0)
        {
            res=i;
        }
    }
    printf("\n HCF Of %d and %d=%d",a,b,res);
    return 0;
}