#include<stdio.h>
int main()
{
    int a,b,i;
    printf("\n enter two number :");
    scanf("%d%d",&a,&b);
    for(i=a<b?a:b; i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            if(i==1)
            {
            printf("\n %d and %d is co-prime",a,b);
            break;
            }
            else
            {
            printf("\n %d and %d is not co-prime",a,b);
            break;
            }
        }
    }
    return 0;
}