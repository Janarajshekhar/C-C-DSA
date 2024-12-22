#include<stdio.h>
void calculate_sum_of_first_N_natural_numbers(int a);
void calculate_sum_of_first_N_even_natural_numbers(int a);
void calculate_sum_of_first_N_odd_natural_numbers(int a);
void calculate_sum_of_squares_of_first_N_natural_numbers(int a);
void calculate_sum_of_cubes_of_first_N_natural_numbers(int a);
void calculate_factorial_of_a_number(int a);
void count_digits_in_a_given_number(int a);
void check_a_number_is_a_prime_number_or_not(int a);
void calculate_LCM_of_two_numbers(int a,int b);
void reverse_a_given_number(int a);
void find_the_Nth_term_of_the_fibonacci_series(int a);
void print_first_N_terms_of_fibonacci_series(int a);
void check_number_is_fibonacci_series_or_not(int a);
void calculat_HCF_of_two_numbers(int a,int b);
void check_two_numbers_are_co_prime_numbers_or_not(int a,int b);
void print_all_prime_numbers_under_100(int a);
void print_all_prime_numbers_between_two_given_number(int a,int b);
void find_next_prime_number_of_a_given_number(int a);
void check_a_number_is_an_armstrong_number_or_not(int a);
void print_all_armstrong_numbers_under_1000(int r);
int main()
{
    int a,b;
    printf("\n enter the value of a : ");
    scanf("%d",&a);
    // printf("\n enter the value of b : ");
    // scanf("%d",&b);
    print_all_armstrong_numbers_under_1000(a);
    return 0;
}
void calculate_sum_of_first_N_natural_numbers(int a)
{
    int i,s=0;
    for(i=1;i<=a;i++)
    {
        s=s+i;
    }
    printf("\n sum of first %d natural number : %d",a,s);
}
void calculate_sum_of_first_N_even_natural_numbers(int a)
{
    int i,s=0;
    for(i=2;i<=a*2;i=i+2)
    {
        s=s+i;
    }
    printf("\n sum of first %d even natural number : %d",a,s);
}
void calculate_sum_of_first_N_odd_natural_numbers(int a)
{
    int i,s=0;
    for(i=1;i<=a*2;i=i+2)
    {
        s=s+i;
    }
    printf("\n sum of first %d odd natural number : %d",a,s);
}
void calculate_sum_of_squares_of_first_N_natural_numbers(int a)
{
    int i,k,s=0;
    for(i=1;i<=a;i++)
    {
        k=i*i;
        s=s+k;
    }
    printf("\n sum of squares of first %d natural numbers : %d",a,s);
}
void calculate_sum_of_cubes_of_first_N_natural_numbers(int a)
{
    int i,k,s=0;
    for(i=1;i<=a;i++)
    {
        k=i*i*i;
        s=s+k;
    }
    printf("\n sum of cubes of first %d natural numbers : %d",a,s);
}
void calculate_factorial_of_a_number(int a)
{
    int i,f=1;
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    printf("\n factorial of %d is : %d",a,f);
}
void count_digits_in_a_given_number(int a)
{
    int i;
    for(i=0;a;i++)
    {
        a=a/10;
    }
    printf("\n digit = %d",i);
}
void check_a_number_is_a_prime_number_or_not(int a)
{
    int i;
    for(i=2;i<=a-1;i++)
        if(a%i==0)
            break;
    if(i==a)
        printf("prime");
    else
        printf("not prime");
}
void calculate_LCM_of_two_numbers(int a,int b)
{
    int i,l,flag;
    for(i=2,l=1,flag=0;a>1||b>1;)
    {
        if(a%i==0)
        {
            a=a/i;
            flag=1;
        }
        if(b%i==0)
        {
            b=b/i;
            flag=1;
        }
        if(flag==1)
        {
            l=l*i;
            flag=0;
        }
        else
            i++;
    }
    printf("\n LCM is %d",l);   
}
void reverse_a_given_number(int a)
{
    int i,x=0;
    for(;a;a=a/10)
    {
        x=(x*10)+(a%10);
    }
    printf("\n %d",x);
}
void find_the_Nth_term_of_the_fibonacci_series(int a)
{
    int x=-1,y=1,z,i;
    for(i=0;i<=a;i++)
    {
        z=x+y;
        x=y;
        y=z;
    }
    printf("\n %dth term of the fibonacci series is %d",a,z);
}
void print_first_N_terms_of_fibonacci_series(int a)
{
    int x=-1,y=1,z,i;
    printf("\n %d term of the fibonacci series is : ",a);
    for(i=0;i<=a;i++)
    {
        z=x+y;
        x=y;
        y=z;
    printf(" %d",z);
    }
}
void check_number_is_fibonacci_series_or_not(int a)
{
    int x=-1,y=1,z,i;
    for(i=0; ;i++)
    {
        z=x+y;
            if(z==a)
            {
                printf("%d is %d term fibonacci siries",a,i);
                break;
            }
            if(z>a)
            {
                printf("%d is not fibonacci siries",a);
                break;
            }
        x=y;
        y=z;
    }
}
void calculat_HCF_of_two_numbers(int a,int b)
{
    int H;
    for(H=a<b?a:b;H>=1;H--){
        if(a%H==0&&b%H==0)
        break;
    }
    printf("\n HCF is %d",H);
}
void check_two_numbers_are_co_prime_numbers_or_not(int a,int b)
{
    int H;
    for(H=a<b?a:b;H>=1;H--){
        if(a%H==0&&b%H==0)
        break;
    }
    if(H==1)
    printf("\n %d and %d are co-prime numbers",a,b);
    else
    printf("\n %d and %d are not co-prime numbers",a,b);
}
void print_all_prime_numbers_under_100(int a)
{
    int i,x;
    for(x=2;x<=a;x++){
        for(i=2;i<=x;i++)
        if(x%i==0)
        break;
    if(i==x)
        printf("%d  ",x);
    }
}
void print_all_prime_numbers_between_two_given_number(int a,int b)
{
    int i,x;
    for(x=a;x<=b;x++){
        for(i=2;i<=x;i++)
        if(x%i==0)
        break;
    if(i==x)
        printf("%d  ",x);
    }
}
void find_next_prime_number_of_a_given_number(int a)
{
    int i,x;
    for(x=a+1; ;x++){
        for(i=2;i<=x;i++)
        if(x%i==0)
        break;
    if(i==x){
        printf("\n next prime number is %d",x);
        break;
        }
    }
}
void check_a_number_is_an_armstrong_number_or_not(int a)
{
    int y,n=0,i,sum=0,d,p;
    y=a;
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
void print_all_armstrong_numbers_under_1000(int r)
{
    int y,n=0,i,sum=0,d,p,a;
    printf("\n Armstrong number under %d is",r);
    for(a=1;a<=r;a++){
    y=a;
    n=0;
    for(y=a;y;n++)
    {
        y=y/10;
    }
    for(y=a,sum=0;y;y=y/10)
    {
        d=y%10;
        for(p=1,i=1;i<=n;i++)
            p=p*d;
        sum=sum+p;
    }
    if(sum==a)
        printf("%d  ",a);
    }
}