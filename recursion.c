#include<stdio.h>
void f1(int n);
int main()
{
    int k,x;
    printf("\n enter the value of x :");
    scanf("%d",&x);
    f1(x);
    // printf("\n %d",k);
    return 0;
}
void f1(int n)
{
    // int s;
    // printf("\n enter a number :");
    // scanf("%d",&a);
    if(n>0)
    {
    // return (1);
    f1(n-1);
    printf("%d ",n);
    }
//    return (s);
}