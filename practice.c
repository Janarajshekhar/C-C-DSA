#include<stdio.h>
#include<math.h>
void calculat_the_sum_of_first_n_natural_number_using_loop();
void count_the_digites_of_a_integer();
void find_the_revers_of_a_integer();
void check_a_number_is_palindrom_or_not();
void check_a_number_is_armstrong_number_or_not();
void check_a_number_is_prime_or_not();
void check_a_number_is_strong_or_not();
void fibonacci_squence_from_0_to_n();
int main()
{
    // calculat_the_sum_of_first_n_natural_number_using_loop();
    // count_the_digites_of_a_integer();
    // find_the_revers_of_a_integer();
    // check_a_number_is_palindrom_or_not();
    // check_a_number_is_armstrong_number_or_not();
    // check_a_number_is_prime_or_not();
    // check_a_number_is_strong_or_not();
    fibonacci_squence_from_0_to_n();
    return 0;
}
void calculat_the_sum_of_first_n_natural_number_using_loop()
{
    int n,i,s=0;
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("\n sum = %d",s);
}
void count_the_digites_of_a_integer()
{
    int a,i;
    printf("\n Enter a number : ");
    scanf("%d",&a);
    for(i=0;a!=0;i++)
    {
        a=a/10;
    }
    printf("digit is %d",i);
}
void find_the_revers_of_a_integer()
{
    int a,r=0,s;
    printf("\n Enter a number : ");
    scanf("%d",&a);
    for(;a!=0;a=a/10)
    {
        s=a%10;
        r=10*r+s;
    }
    printf("\n revers number is %d",r);
}
void check_a_number_is_palindrom_or_not()
{
    int a,s,r=0,b;
    printf("\n Enter a number : ");
    scanf("%d",&a);
    b=a;
    for(;a!=0;a=a/10)
    {
        s=a%10;
        r=10*r+s;
    }
    if(b==r)
    printf("\n %d is palindrom number",b);
    else
    printf("\n %d is not palindrom number",b);
}
void check_a_number_is_armstrong_number_or_not()
{
    int a,y,n=0,i,sum=0,d,p;
    printf("\n Enter a number : ");
    scanf("%d",&a);
    for(y=a;y;n++)
    {
        y=y/10;
    }
    for(y=a;y;y=y/10)
    {
        d=y%10;
        for(p=1,i=1;i<=n;i++)
            p=p*d;
        sum=sum+p;
    }
    if(sum==a)
        printf("%d is an armstrong number",a);
    else
        printf("%d is not an armstrong number",a);
}
void check_a_number_is_prime_or_not()
{
    int a,n,i;
    printf("\n Enter a number : ");
    scanf("%d",&a);
    n=1;
    for(i=2;i<=a/2;i++)
    {
        n=a%i;
        if(n==0)
        break;
    }
    if(n!=0)
    printf("\n %d is a prime number",a);
    else
    printf("\n %d is not a prime number",a);
}
void check_a_number_is_strong_or_not()
{
    int a,f,c,n,i,r,s=0;
    printf("\n Enter a number : ");
    scanf("%d",&a);
    c=a;
    for(;a!=0;a=a/10)
    {
        r=a%10;
        f=1;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        s=s+f;
    }
    if(c==s)
    printf("\n %d is a strong number",c);
    else
    printf("\n %d is not a strong number",c);
}
void fibonacci_squence_from_0_to_n()
{
    int a=0,b=1,c,n;
    printf("\n");
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    printf("%d",a);
    printf("\t %d",b);
    c=a+b;
    while(c<=n)
    {
        printf("\t %d",c);
        a=b;
        b=c;
        c=a+b;
    }
}