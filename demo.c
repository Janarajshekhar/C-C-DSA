#include<stdio.h>
int main()
{
    int i,a,n;
    printf("\n enter table no ::");
    scanf("%d",&n);
   for(i=1; i<=10; i++)
   if(a=n*i)
   printf("\n %d * %d = %d",n,i,a);
    return 0;
}