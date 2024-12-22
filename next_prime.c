#include<stdio.h>
int main()
{
    int n,x,i;
    printf("\n Enter a number :");
    scanf("%d",&n);
    for(x=n+1;   ; x++)
    {
        for(i=2; i<x; i++)
            if(x%i==0)
            break;
    if(i==x)
        {
        printf("\n Next prime number is %d",x);
        break;
        }
    }
    return 0;
}