#include<stdio.h>
int main()
{
    int x,y,count,digit,pow,sum=0,i;
    printf("\n enter a number :");
    scanf("%d",&x);
    y=x;
    for(count=1;count<=y;count++)
    {
         y/=10; // n=n/10;
    }
    for(y=x;y;y=y/10)
    {
        digit=y%10;
        for(i=1; i<=count; i++)
        {
            pow=pow*digit;
            sum=sum+pow;
        }
    }
    if(sum==x)
    printf("\n %d is an armstrong number",x);
    else
    printf("\n %d is an not armstrong number",x);
    return 0;    
}