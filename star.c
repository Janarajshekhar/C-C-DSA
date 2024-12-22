#include<stdio.h>
int main()
{
    int x,y,i,j,k;
    printf("\n how many row enter :");
    scanf("%d",&x);
    // printf("\n how many column enter :");
    // scanf("%d",&y);
    for(i=1;i<=x;i++)
    {
        k=1;
        for(j=1;j<=(2*x)-1;j++)
        if(j>=(x+1)-i && j<=(x-1)+i)
        {
            if(k)
            printf("* ");
            else
            printf("  ");
            k=1-k;
        }
        else
        printf("  ");
        printf("\n");
    }
    printf("\n");
    return 0;
}