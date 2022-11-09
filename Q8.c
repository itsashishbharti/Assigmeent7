#include<stdio.h>
int main()
{
    int i,j,c=0,p;
    printf("Enter Your Number=");
    scanf("%d",&i);
    p=i;
    i++;
    for(;i<=i+10;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("\n Next Prime Number Of %d = %d",p,i);
            break;
        }
    }
    return 0;
}