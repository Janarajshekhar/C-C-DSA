#include<stdio.h>
int main()
{
   int n,i=2,r;
   printf("\n enter the value of n ::");
   scanf("%d",&n);
    r=1;
   for(i=2;i<=n/2;i++)
    {
        r=n%i;
        if(r==0)
        break;
    }
    if(r!=0)
    printf("\n %d is prime number",n);
    else
    printf("\n %d is not prime number",n);
    return 0;
}