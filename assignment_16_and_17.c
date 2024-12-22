#include<stdio.h>
void n_naturl_number(int n);
void reverse_n_naturl_number(int n);
void n_odd_naturl_number(int n);
void reverse_n_odd_naturl_number(int n);
void n_even_naturl_number(int n);
void reverse_n_even_naturl_number(int n);
void squares_n_naturl_number(int n);
void print_binary_of_a_given_decimal_number(int n);
void print_octal_of_a_given_decimal_number(int n);
void print_reverse_of_a_given_number(int n);
int calculate_sum_of_first_N_natural_number(int n);
int calculate_sum_of_first_N_odd_natural_number(int n);
int calculate_sum_of_first_N_even_natural_number(int n);
int calculate_sum_of_squares_of_first_N_natural_number(int n);
int calculate_sum_of_digits_of_a_given_number(int n);
int calculat_factorial_of_a_given_number(int n);
int calculat_HCF_of_two_number(int n,int o);
void print_first_n_trams_of_fibonacci_series(int n);
int fibonacci(int n);
int count_the_digit_of_a_given_number(int n);
float power(float n,float o);
int main()
{
    int n,o;
    float k;
    printf("\n enter the value of n :");
    scanf("%d",&n);
    printf("\n enter the value of o :");
    scanf("%d",&o);
    k=power(n,o);
    printf("%f",k);
    return 0;
}
void n_naturl_number(int n)
{
    if(n>0)
    {
        n_naturl_number(n-1);
         printf("%d ",n);
    }
}
void reverse_n_naturl_number(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        reverse_n_naturl_number(n-1);
    }
}
void n_odd_naturl_number(int n)
{
    if(n>0)
    {
        n_odd_naturl_number(n-1);
        printf("%d ",2*n-1 );
    }
}
void reverse_n_odd_naturl_number(int n)
{
    if(n>0)
    {
         printf("%d ",2*n-1 );
        reverse_n_odd_naturl_number(n-1);
    }
}
void n_even_naturl_number(int n)
{
    if(n>0)
    {
        n_even_naturl_number(n-1);
        printf("%d ",2*n);
    }
}
void reverse_n_even_naturl_number(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        reverse_n_even_naturl_number(n-1);
    }
}
void squares_n_naturl_number(int n)
{
    if(n>0)
    {
        squares_n_naturl_number(n-1);
        printf("%d ",n*n);
    }
}
void print_binary_of_a_given_decimal_number(int n)
{
    if(n>0)
    {
        print_binary_of_a_given_decimal_number(n/2);
        printf("%d",n%2);
    }
}
void print_octal_of_a_given_decimal_number(int n)
{
    if(n>0)
    {
       print_octal_of_a_given_decimal_number(n/8);
       printf("%d",n%8); 
    }
}
void print_reverse_of_a_given_number(int n)
{
    if(n>0)
    {
    printf("%d",n%10);
    print_reverse_of_a_given_number(n/10);
    }
}
int calculate_sum_of_first_N_natural_number(int n)
{
    int s;
    if(n==1)
    return 1;
    s=n+calculate_sum_of_first_N_natural_number(n-1);
    return s;
}
int calculate_sum_of_first_N_odd_natural_number(int n)
{
    int s;
    if(n==1)
    return 1;
    s=((2*n)-1)+(calculate_sum_of_first_N_odd_natural_number(n-1));
    return s;
}
int calculate_sum_of_first_N_even_natural_number(int n)
{
    int s;
    if(n==1)
    return 2;
    s=(2*n)+(calculate_sum_of_first_N_even_natural_number(n-1));
    return s;
}
int calculate_sum_of_squares_of_first_N_natural_number(int n)
{
    int s;
    if(n==1)
    return 1;
    s=(n*n)+calculate_sum_of_squares_of_first_N_natural_number(n-1);
    return s;
}
int calculate_sum_of_digits_of_a_given_number(int n)
{
    int s;
    if(n==0)
    return 0;
    s=(n%10)+calculate_sum_of_digits_of_a_given_number(n/10);
    return s;
}
int calculat_factorial_of_a_given_number(int n)
{
    int f;
    if(n==0)
    return 1;
    f=n*calculat_factorial_of_a_given_number(n-1);
    return f;
}
int calculat_HCF_of_two_number(int n,int o)
{
    int hcf;
    if(n>o)
    {
        if(n%o==0)
            return o;
        else
            hcf=calculat_HCF_of_two_number(n%o,o);
            return hcf;
    }
    else
    {
        if(o%n==0)
            return n;
        else
            hcf=calculat_HCF_of_two_number(o,o%n);
            return hcf;  
    }
}
int fibonacci(int n)
{
    int fib;
    if(n==0||n==1)
        return n;
    fib=fibonacci(n-1)+fibonacci(n-2);
    return fib;
}
void print_first_n_trams_of_fibonacci_series(int n)
{
    if(n==0)
        printf("%d ",n);
    else
    {
       print_first_n_trams_of_fibonacci_series(n-1);
       printf("%d ",fibonacci(n));
    }
}
int count_the_digit_of_a_given_number(int n)
{
    if(n==0)
        return 0;
    return (count_the_digit_of_a_given_number(n/10)+1);
}
float power(float n,float o)
{
    if(o==0)
        return 1;
    if(o>0)
        return n*power(n,o-1);
    if(o<0)
        return (power(n,o+1)/n);  
} 