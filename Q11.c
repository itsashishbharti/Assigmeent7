#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter Your Number=");
    scanf("%d",&a);
    while(a>0)
    {
    b=a%2;
    a=a/2;
    c++;
        if(b==1)
        {
            printf("\n Position Of first 1=%d",c);
            break;
        }
    }

}