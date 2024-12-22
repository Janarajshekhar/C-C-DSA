#include<stdio.h>
int assignment_14_Question_no_7(int n,int r);
int assignment_14_Question_no_8(int n,int r);
int assignment_14_Question_no_9(int n,int r);
void assignment_14_Question_no_10(int n);
void assignment_15_Question_no_8(int n);
int assignment_15_Question_no_10(int n);
int fact(int n);
int main()
{
    int n,r,k;
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    // printf("\n Enter which number contains : ");
    // scanf("%d",&r);
    k=assignment_15_Question_no_10(n);
    //     printf("\n Yes %d is contains %d",n,r);
    // else
    // printf("\n No %d doesn't contains %d",n,r);
    printf("\n sum of first %d terms of the series is %d",n,k);
    return 0;
}
int assignment_14_Question_no_7(int n,int r)
{
    int a=1,b=1,c=1,i,d;
    for(i=1;i<=n;i++)
    {
        a=a*i;
    }
    for(i=1;i<=r;i++)
    {
        b=b*i;
    }
    for(i=1;i<=(n-r);i++)
    {
        c=c*i;
    }
    d=a/(b*c);
    return d;
}
int assignment_14_Question_no_8(int n,int r)
{
    int a=1,b=1,c,i;
    for(i=1;i<=n;i++)
    {
        a=a*i;
    }
    for(i=1;i<=(n-r);i++)
    {
        b=b*i;
    }
    c=a/b;
    return c;
}
int assignment_14_Question_no_9(int num,int digit)
{
    while(num)
    {
        if(num%10==digit)
            return 1;
        num=num/10;
    }
    return 0;
}
void assignment_14_Question_no_10(int n)
{
    int i=2;
    while(n>1)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n/=i;
        }
        i++;
    }
}
void assignment_15_Question_no_8(int n)
{
    int i,j,k,r;
    for(i=1;i<=n;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i&&j<=n-1+i)
            {
                if(k)
                    printf(" %2d ",assignment_14_Question_no_7(i-1,r++));
                else
                    printf("   ");
                k=1-k;
            }
            else
                printf("   ");
        }
        printf("\n");
    }
}
void assignment_15_Question_no_9(int n)
{
    
}
int assignment_15_Question_no_10(int n)
{
    int s=0;
    while(n)
    {
        s=s+fact(n)/n;
        n--;
    }
    return s;
}
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}