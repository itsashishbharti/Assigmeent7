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
    if(res==1)
    {
        printf("%d and %d are CO-PRIME NUMBERS.", a, b);
    }
    else
    {
        printf("%d and %d are NOT CO-PRIME NUMBERS.", a, b);
    }
    return 0;
}