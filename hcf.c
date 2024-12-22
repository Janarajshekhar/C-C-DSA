#include<stdio.h>
int main()
{
    int a,b,i;
    printf("\n enter two number :");
    scanf("%d%d",&a,&b);
    for(i=a<b?a:b; i>=1 ; i--)
    {
    if(a%i==0 && b%i==0)
    break;
    }
    printf("\n hcf is %d",i);
    return 0;
}