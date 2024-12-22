#include<stdio.h>
void print_MySirG_5_times();
void print_the_first_10_natural_number();
void print_the_first_10_natural_number_in_reverse_order();
void print_the_first_10_odd_natural_number();
void print_the_first_10_odd_natural_number_in_reverse_order();
void print_the_first_10_even_natural_number();
void print_the_first_10_even_natural_number_in_reverse_order();
void print_squares_of_the_first_10_natural_number();
void print_cubes_of_the_first_10_natural_number();
void print_a_table_of_5();
void print_MySirG_N_times(int a);
void print_the_first_N_natural_number(int a);
void print_the_first_N_natural_number_in_reverse_order(int a);
void print_the_first_N_odd_natural_number(int a);
void print_the_first_N_odd_natural_number_in_reverse_order(int a);
void print_the_first_N_even_natural_number(int a);
void print_the_first_N_even_natural_number_in_reverse_order(int a);
void print_squares_of_the_first_N_natural_number(int a);
void print_cubes_of_the_first_N_natural_number(int a);
void print_a_table_of_N(int a);
int main()
{
    int n;
    printf("\n enter the value of n :");
    scanf("%d",&n);
    print_a_table_of_N(n);
}
void print_MySirG_5_times()
{
    int i;
    for(i=0;i<5;i++)
    printf("MySirG   ");
}
void print_the_first_10_natural_number()
{
    int i;
    printf("\n first 10 natural number is :");
    for(i=1;i<=10;i++)
    printf(" %d ",i);
}
void print_the_first_10_natural_number_in_reverse_order()
{
    int i;
    printf("\n first 10 natural number in reverse order is :");
    for(i=10;i>=1;i--)
    printf(" %d ",i);
}
void print_the_first_10_odd_natural_number()
{
    int i;
    printf("\n first 10 odd natural number is :");
    for(i=1;i<=2*10;i=i+2)
    {
    printf(" %d ",i);
    }
}
void print_the_first_10_odd_natural_number_in_reverse_order()
{
    int i;
    printf("\n first 10 odd natural number in reverse order is :");
    for(i=2*10-1;i>=1;i=i-2)
    {
    printf(" %d ",i);
    }
}
void print_the_first_10_even_natural_number()
{
    int i;
    printf("\n first 10 even natural number is :");
    for(i=2;i<=2*10;i=i+2)
    {
        printf(" %d ",i);
    }
}
void print_the_first_10_even_natural_number_in_reverse_order()
{
   int i;
   printf("\n first 10 even natural number in reverse order is :"); 
   for(i=2*10;i>=2;i=i-2)
    {
        printf(" %d ",i);
    }
}
void print_squares_of_the_first_10_natural_number()
{
    int i,k;
    printf("\n squares of the first 10 natural number is :");
    for(i=1;i<=10;i++)
    {
        k=i*i;
        printf(" %d ",k);
    }
}
void print_cubes_of_the_first_10_natural_number()
{
    int i,k;
    printf("\n cubes of the first 10 natural number is :");
    for(i=1;i<=10;i++)
    {
        k=i*i*i;
        printf(" %d ",k);
    }
}
void print_a_table_of_5()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("5 * %d = %d     ",i,(i*5));
    }
}
void print_MySirG_N_times(int a)
{
    int i;
    for(i=0;i<a;i++)
    printf("MySirG   ");
}
void print_the_first_N_natural_number(int a)
{
    int i;
    printf("\n first %d natural number is :",a);
    for(i=1;i<=a;i++)
    printf(" %d ",i);
}
void print_the_first_N_natural_number_in_reverse_order(int a)
{
    int i;
    printf("\n first %d natural number in reverse order is :",a);
    for(i=a;i>=1;i--)
    printf(" %d ",i);
}
void print_the_first_N_odd_natural_number(int a)
{
    int i;
    printf("\n first %d odd natural number is :",a);
    for(i=1;i<=2*a;i=i+2)
    {
    printf(" %d ",i);
    }
}
void print_the_first_N_odd_natural_number_in_reverse_order(int a)
{
    int i;
    printf("\n first %d odd natural number in reverse order is :",a);
    for(i=2*a-1;i>=1;i=i-2)
    {
    printf(" %d ",i);
    }
}
void print_the_first_N_even_natural_number(int a)
{
    int i;
    printf("\n first %d even natural number is :",a);
    for(i=2;i<=2*a;i=i+2)
    {
        printf(" %d ",i);
    }
}
void print_the_first_N_even_natural_number_in_reverse_order(int a)
{
   int i;
   printf("\n first %d even natural number in reverse order is :",a); 
   for(i=2*a;i>=2;i=i-2)
    {
        printf(" %d ",i);
    }
}
void print_squares_of_the_first_N_natural_number(int a)
{
    int i,k;
    printf("\n squares of the first %d natural number is :",a);
    for(i=1;i<=a;i++)
    {
        k=i*i;
        printf("%d^2 = %d   ",i,k);
    }
}
void print_cubes_of_the_first_N_natural_number(int a)
{
    int i,k;
    printf("\n cubes of the first %d natural number is :",a);
    for(i=1;i<=a;i++)
    {
        k=i*i*i;
        printf("%d^3 = %d   ",i,k);
    }
}
void print_a_table_of_N(int a)
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d     ",a,i,(i*a));
    }
}