#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,i,f=1;
    float s=1;
    printf("\n enter the value of x and n ::");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        printf("%d",f);
        s=s+(float)(pow(x,i)/f);
    }
    printf("\n sum=%0.2f",s);
    return 0;
}