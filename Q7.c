#include<stdio.h>
int main()
{
    int i,j,c,temp;
    printf("Enter Your 1st Number=");
    scanf("%d",&i);
    printf("\nEnter Your 2nd Number=");
    scanf("%d",&j);
   /* if(i<j)
    {
        temp=i;
        i=j;
        j=temp;
    }*/
    for(;i<=j;i++)
    {
        c=0;
        for(int k=1;k<=i;k++)
        {
            if(i%k==0)
            {
                c++;
            }
        }
            if(c==2)
            {
                printf("%d ",i);
            }
    }
    return 0;
}