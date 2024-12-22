#include<stdio.h>
#include<math.h>
int main()
{
    int a=-1,b=1,c,n,i=0;
    printf("\n enter a number :");
    scanf("%d",&n);
        for(i=0 ; ; i++)
        {
        c=a+b;
            if(c==n)
            {
            printf("\n %d is fibonacci series",n);
            break;
            }
            if(c>n)
            {
            printf("\n %d is not fibonacci series",n);
            break;
            }
        a=b;
        b=c;
        }
    return 0;
}
