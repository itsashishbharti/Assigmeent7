#include<stdio.h>
int main()
{
    int i,j,r,sum=0;
    printf("Enter Your Number=");
    scanf("%d",&i);
    j=i;
    while(i!=0)
    {
        r=i%10;
        sum=sum+(r*r*r);
        i=i/10;
    }
        if(j==sum)
        {
            printf("\n Entered Number IS Armstrong");
        }
        else
        {
            printf("\n Entered Number Is Not Armstrong ");
        }
    return 0;
}