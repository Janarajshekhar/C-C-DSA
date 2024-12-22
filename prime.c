#include<stdio.h>
int main()
{
    int a,b,n,i;
    printf("\n Enter lower number :");
    scanf("%d",&a);
    printf("\n Enter uppre number :");
    scanf("%d",&b);
    printf("\n prime number under 100 is :");
    for(n=a; n<=b; n++)
    {
        for(i=2; i<b; i++)
        {
            if(n%i==0)
            break;
        }
    if(i==n)
    printf("%d ",n);
    }
    return 0;
}