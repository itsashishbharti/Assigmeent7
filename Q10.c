#include<stdio.h>
int main()
{
    int tem;
    for(int i=1;i<=1000;i++)
    {
        tem=i;
       int r,sum=0;
        while(tem!=0)
        {
            r=tem%10;
            sum=sum+(r*r*r);
            tem=tem/10;
        }
        if(i==sum)
        {
            printf("%d ",i);
        }
    }
    return 0;
}