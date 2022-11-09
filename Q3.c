#include<stdio.h>
int main()
{
    int f=0,f1=1,n,c=0;
    printf("Enter Your Number=");
    scanf("%d",&n);
   // printf("%d %d ",f,f1);
        int next=f+f1;
    for(int i=1;i<=n;i++)
    {
        if(next==n||n==0||n==1)
        {
            c=1;
           break;
        }
        else
        {
            c=0;
            
        }
        f=f1;
        f1=next;
        next=f+f1;
    }
    if(c==1)
    {
         printf("\nYes Number Is Fibonacci");
    }
    else
    {
        printf("\n No Entered Number Is Not Fibonacci ");
    }
    return 0;
}