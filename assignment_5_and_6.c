#include<stdio.h>
void given_number_is_positive_or_non_positive(int a);
void given_number_is_divisible_by_5_or_not(int a);
void given_number_is_even_or_odd(int a);
void given_number_is_even_or_odd_without_using_remender_opeator(int a);
void given_number_is_even_or_odd_using_bitwise_opeator(int a);
void given_number_is_a_three_digit_number_or_not(int n);
void print_greater_between_two_number(int x,int y);
void quadratic_equation(int a,int b,int c);
void check_whether_a_given_year_is_a_leap_year_or_not(int a);
void find_greatest_among_three_given_number(int a,int b,int c);
void print_profit_or_loss_precentage(int a,int b);
void print_candidate_passed_the_examination_or_failed(int a,int b,int c,int d,int e);
void check_given_alphabet_is_uppercase_or_lowercase(char a);
void check_number_is_divisible_bY_3_and_divisible_by_2(int a);
void check_number_is_divisible_bY_7_and_divisible_by_3(int a);
void check_number_is_positive_negative_zero(int a);
void check_character_is_alphabet_digit_special_character(char a);
void triangle_is_valid_or_not(int a,int b,int c);
void display_number_of_days_in_that_month(int a);
int main()
{
    int a,b,c,d,e;
    printf("\n enter month number :");
    scanf("%d",&a);
    // printf("\n enter the marks of second subject :");
    // scanf("%d",&b);
    // printf("\n enter the marks of third subject :");
    // scanf("%d",&c);
    // printf("\n enter the marks of fourth subject :");
    // scanf("%d",&d);
    // printf("\n enter the marks of fifth subject :");
    // scanf("%d",&e);
    display_number_of_days_in_that_month(a);
    return 0;
}
void given_number_is_positive_or_non_positive(int a)
{
    if(a>0)
    printf("\n %d is positive number",a);
    else
    printf("\n %d is non positive number",a);
}
void given_number_is_divisible_by_5_or_not(int a)
{
    if(a%5==0)
    printf("\n %d is divisible by 5",a);
    else
    printf("\n %d is not divisible by 5",a);
}
void given_number_is_even_or_odd(int a)
{
    if(a%2==0)
    printf("\n %d is even number",a);
    else
    printf("\n %d is odd number",a);
}
void given_number_is_even_or_odd_without_using_remender_opeator(int a)
{
    if((a/2)*2==a)
    printf("\n %d is even number",a);
    else
    printf("\n %d is odd number",a);
}
void given_number_is_even_or_odd_using_bitwise_opeator(int a)
{
    if(a & 1)
    printf("\n %d is odd number",a);
    else
    printf("\n %d is even number",a);
}
void given_number_is_a_three_digit_number_or_not(int n)
{
    if(n>=100 && n<=999)
    printf("\n %d is three digit number",n);
    else
    printf("\n %d is not three digit number",n);
}
void print_greater_between_two_number(int x,int y)
{
    if(x>y)
    printf("\n %d is greater",x);
    else
    printf("\n %d is greater or both are the same",y);
}
void quadratic_equation(int a,int b,int c)
{
  printf("\n quadratic equation is :: \"%dx^2+%dx+%d=0\"",a,b,c);
  if(((b*b)-(4*a*c)>0))
  printf("\n value of 'x' is real & distinct");
  else if(((b*b)-(4*a*c)<0))
  printf("\n value of 'x' is imaginary root");
  else 
  printf("\n value of 'x' is real & equal");
}
void check_whether_a_given_year_is_a_leap_year_or_not(int a)
{
    if((a%4==0||a%400==0)&&a%100!=0)
        printf("\n %d is leap year",a);
    else
        printf("\n %d is non leap year",a);
}
void find_greatest_among_three_given_number(int a,int b,int c)
{
    if(a>b && a>c)
        printf("\n greatest number is %d",a);
    else if(b>c)
        printf("\n greatest number is %d",b);
    else
        printf("\n greatest number is %d",c);
}
void print_profit_or_loss_precentage(int a,int b)
{
  float x,y;
  if(b-a>=0)
  {
    x=((b-a)*100.0)/a;
    printf("\n profit precentage is %f",x); 
  }
  else
  {
    y=((a-b)*100.0)/a;
    printf("\n loss precentage is %f",y);
  }
}
void print_candidate_passed_the_examination_or_failed(int a,int b,int c,int d,int e)
{
    if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
        printf("\n result is PASS");
    else
        printf("\n result is FAIL");
}
void check_given_alphabet_is_uppercase_or_lowercase(char a)
{
    if(a>='A'&&a<='Z')
        printf("\n %c is uppercase");
    else if(a>='a'&&a<='z')
        printf("\n %c is lowercase");
    else
        printf("\n Not an alphabet");
}
void check_number_is_divisible_bY_3_and_divisible_by_2(int a)
{
    if(a%3==0&&a%2==0)
    printf("\n %d is divisible by 3 and divisible by 2",a);
    else
    printf("\n %d is not divisible by 3 and divisible by 2",a);
}
void check_number_is_divisible_bY_7_and_divisible_by_3(int a)
{
    if(a%7==0&&a%3==0)
    printf("\n %d is divisible by 7 and divisible by 3",a);
    else
    printf("\n %d is not divisible by 7 and divisible by 3",a);
}
void check_number_is_positive_negative_zero(int a)
{
    if(a>0)
        printf("\n %d is positive",a);
    else if(a<0)
        printf("\n %d is negative",a);
    else
        printf("\n %d is zero",a);
}
void check_character_is_alphabet_digit_special_character(char a)
{
    if(a>='A'&&a<='Z')
        printf("\n %c is uppercase alphabet",a);
    else if(a>='a'&&a<='z')
        printf("\n %c is lowercase alphabet",a);
    else if(a>='0'&&a<='9')
        printf("\n %c is digit",a);
    else
        printf("\n %c is special character",a);
}
void triangle_is_valid_or_not(int a,int b,int c)
{
    if(a+b>c&&b+c>a&&a+c>b)
    printf("\n this triangle is valid");
    else
    printf("\n this triangle is not valid");
}
void display_number_of_days_in_that_month(int a)
{
    if(a<1||a>12)
        printf("\n %d month is not valid",a);
    else if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
        printf("\n this month day's is 31");
    else if(a==4||a==6||a==9||a==11)
        printf("\n this month day's is 30");
    else
        printf("\n this month day's is 28 or 29");
}