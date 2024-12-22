#include<stdio.h>
float area_of_circle(int r);
float simple_interest(int p,float r,int t);
int even_odd(int n);
void first_n_natural_number(int n);
void first_n_odd_natural_number(int n);
int factorial_a_number(int n);
int combination(int n,int r);
int permu(int n,int r);
int lcm(int a,int b);
int hcf(int a,int b);
int check_prime_number(int a);
int next_prime(int a);
void swap(int *p,int *q);
int main()
{
    int a,b,k;
    printf("\n enter the value of a : ");
    scanf("%d",&a);
    printf("\n enter the value of b : ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    // if(k==1)
    // printf("\n %d is a prime number",a);
    // else
    // printf("\n %d is not a prime number",a);
    // printf("\n next prime number is %d",k);
    return 0; 
}
int next_prime(int a)
{
    while(!check_prime_number(++a));
    return a;
}
int check_prime_number(int a)
{
    int p;
    for(p=2;p<=a-1;p++)
        if(a%p==0)
            return 0;
    return 1;
}
int hcf(int a,int b)
{
    int h;
    for(h=a<b?a:b;h>=1;h--)
        if(a%h==0&&b%h==0)
        return (h);
}
int lcm(int a,int b)
{
    int l;
    for(l=a>b?a:b;l<=a*b;l++)
        if(l%a==0&&l%b==0)
        return (l);
}
int permu(int n,int r)
{
    int i,f_n=1,f_r=1,f_nr=1,permu;
    for(i=1;i<=n;i++)
    {
        f_n=f_n*i;
    }
    for(i=1;i<=n-r;i++)
    {
        f_nr=f_nr*i;
    }
    permu=f_n/f_nr;
    return (permu);
}
int combination(int n,int r)
{
    int i,f_n=1,f_r=1,f_nr=1,combi;
    for(i=1;i<=n;i++)
    {
        f_n=f_n*i;
    }
    for(i=1;i<=r;i++)
    {
        f_r=f_r*i;
    }
    for(i=1;i<=n-r;i++)
    {
        f_nr=f_nr*i;
    }
    combi=f_n/(f_r*f_nr);
    return (combi);
}
int factorial_a_number(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return (f);
}
void first_n_odd_natural_number(int n)
{
    int i;
    printf("\nfirst %d odd natural number is : ",n);
    for(i=1; i<=n; i++)
    printf("\t %d",2*i-1);
}
void first_n_natural_number(int n)
{
    int i;
    printf("\nfirst %d natural number is : ",n);
    for(i=1; i<=n; i++)
    printf("\t %d",i);
}
int even_odd(int n)
{
    if(n%2==0)
    {printf("\n even");
    return (1);
    }
    else
    {
    printf("\n odd");
    return (0);
    }
}
float simple_interest(int p,float r,int t)
{
    float si;
    si=(p*r*t)/100;
    return (si);
} 
float area_of_circle(int r)
{
    float area;
    area=3.14*r*r;
    return (area);
}
void swap(int *p,int *q)
{
    int c;
    c=*p;
    *p=*q;
    *q=c;
}