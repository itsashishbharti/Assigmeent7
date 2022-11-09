#include<stdio.h>
int main()
{
    int f=0,f1=1,n;
    printf("Enter Your Number=");
    scanf("%d",&n);
    printf("%d %d ",f,f1);
        int next=f+f1;
    for(int i=3;i<=n;i++)
    {
        printf("%d ",next);
        f=f1;
        f1=next;
        next=f+f1;
    }
    printf("\n Nth Term Of Fibonacci is %d",next-f);
    return 0;
}