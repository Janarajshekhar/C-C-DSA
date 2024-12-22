#include<stdio.h>
void size_of_chaeacter_constant();
void size_of_real_constant();
void A_to_B_using_increment_operator();
void print_unit_digit_of_a_given_number(int a);
void print_a_given_number_without_its_last_digit(int a);
void swap_values_two_int_variables(int a,int b);
void swap_values_two_int_variables_without_using_a_third_variable(int a,int b);
void swap_values_two_int_variables_without_using_a_third_variable_and_operator(int a,int b);
void swap_values_two_int_variables_without_using_a_third_variable_and_arithmetic_operator(int a,int b);
void swap_values_two_int_variables_in_single_line_arithmatic_expression(int a,int b);
void display_the_sum_of_the_digits(int a);
void ASCII_code_of_the_character(char a);
void size_of_int_float_char_double_type_variable(int a,float b,char c,double d);
void last_digit_of_a_number_stored_in_a_variable_as_zero(int a);
void input_a_number_and_append_a_digit(int a,int b);
void convert_INR_to_USD(float a);
void a_number_and_rotate_its_digits_by_one_position_towords_the_right(int a);
void stored_in_the_variable_x();
void stored_variable_x();
void stored_variable_y();
int main()
{
    int a,b;
    // float b;
    // char c;
    // double d;
    printf("\n enter the value of a :");
    scanf("%d",&a);
    printf("\n enter the value of b :");
    scanf("%d",&b);
    swap_values_two_int_variables_in_single_line_arithmatic_expression(a,b);
    return 0;
}
void size_of_chaeacter_constant()
{
    int x;
    x=sizeof('A');
    printf("\n size of chaeacter constant is %d",x);
}
void size_of_real_constant()
{
    int x;
    x=sizeof(5.4);
    printf("\n size of real constant is %d",x);
}
void A_to_B_using_increment_operator()
{
    int x='A';
    x++;
    printf("\n x = %c",x);
}
void print_unit_digit_of_a_given_number(int a)
{
    int x;
    x=a%10;
    printf("\n unit_digit_of_a_given_number is %d",x);
}
void print_a_given_number_without_its_last_digit(int a)
{
    int x;
    x=a/10;
    printf("\n without last digit number is %d",x);
}
void swap_values_two_int_variables(int a,int b)
{
    int x;
    x=a;
    a=b;
    b=x;
    printf("\n a=%d and b=%d",a,b);
}
void swap_values_two_int_variables_without_using_a_third_variable(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n a=%d and b=%d",a,b);
}
void swap_values_two_int_variables_without_using_a_third_variable_and_operator(int a,int b)
{
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\n a=%d and b=%d",a,b);
}
void swap_values_two_int_variables_without_using_a_third_variable_and_arithmetic_operator(int a,int b)
{
    a=a^b;
    b=a^b;
    a=b^a;
    printf("\n a=%d and b=%d",a,b);
}
void swap_values_two_int_variables_in_single_line_arithmatic_expression(int a,int b)
{
    a=((a+b)-(b=a));
    printf("\n a=%d and b=%d",a,b);
}
void display_the_sum_of_the_digits(int a)
{
    int x;
    x=((a/10)/10)+((a/10)%10)+(a%10);
    printf("\n sum = %d",x);
}
void ASCII_code_of_the_character(char a)
{
    int x;
    x=a;
    printf("\n ASCII code is %d",x);
}
void size_of_int_float_char_double_type_variable(int a,float b,char c,double d)
{
    printf("\nsize of int type variable is %d",sizeof(a));
    printf("\nsize of float type variable is %d",sizeof(b));
    printf("\nsize of char type variable is %d",sizeof(c));
    printf("\nsize of double type variable is %d",sizeof(d));
}
void last_digit_of_a_number_stored_in_a_variable_as_zero(int a)
{
    int x;
    x=((a/10)*10);
    printf("\n then make number is %d",x);
}
void input_a_number_and_append_a_digit(int a,int b)
{
    int x;
    x=((a*10)+b);
    printf("\n resulting number is %d",x);
}
void convert_INR_to_USD(float a)
{
    float x;
    x=(a/84.23);
    printf("\n %0.2f INR = %0.2f USD",a,x);
}
void a_number_and_rotate_its_digits_by_one_position_towords_the_right(int a)
{
    int x;
    x=((a%10)*100)+(a/10);
    printf("\n then make number is %d",x);
}
void stored_in_the_variable_x()
{
    int x=10>8>4;
    printf("\n x=%d",x);
}
void stored_variable_x()
{
    int x=!2>-2;
    printf("\n x=%d",x);
}
void stored_variable_y()
{
    int y=3<0&&5>0;
    printf("\n x=%d",y);
}