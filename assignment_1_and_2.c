#include<stdio.h>
void print_Hello_Students();
void print_Hello_in_first_and_Students_in_second();
void print_MySirG();
void print_n();
void print_r();
void print_Teachers_Day();
int calculate_sum_of_two_integers(int a,int b);
int calculat_square_of_a_given_number(int a);
int calculate_area_of_a_rectangle(int a,int b);
float calculate_area_of_circle(int a);
int calculat_average_of_three_intrgers(int a,int b,int c);
float calculat_circumference_of_a_circle(int a);
float calculat_simple_interest(int a,int b,int c);
int calculate_volume_of_a_cuboid(int a,int b,int c);
float calculat_the_profit_or_loss(int a,int b);
void print_ASCII_code_from_a_character(char a);
void print_a_character_from_ASCII_code(int a);
void print_ASCII_code_from_three_character(char a,char b,char c);
void print_date(int a,int b,int c);
void print_time(int a,int b);
int main()
{
    int a,b,c;
    float k;
    printf("\nenter time format \"H:M\" :");
    scanf("%d:%d",&a,&b);
    // printf("\nenter the value of b :");
    // scanf("%d",&b);
    // printf("\nenter the value of c :");
    // scanf("%d",&c);
    print_time(a,b);
    // printf("profit=%f",k);
    return 0;
}
void print_Hello_Students()
{
    printf("Hello");
}
void print_Hello_in_first_and_Students_in_second()
{
    printf("Hello\nStudents");
}
void print_MySirG()
{
    printf("\"MySirG\"");
}
void print_n()
{
    printf("\\n");
}
void print_r()
{
    printf("\\r");
}
void print_Teachers_Day()
{
    printf("\"Teacher\'s Day\"");
}
int calculate_sum_of_two_integers(int a,int b)
{
    int d;
    d=a+b;
    return d;
}
int calculat_square_of_a_given_number(int a)
{
    int c;
    c=a*a;
    return c;
}
int calculate_area_of_a_rectangle(int a,int b)
{
    int c;
    c=a*b;
    return c;
}
float calculate_area_of_circle(int a)
{
    float c;
    c=3.14*a*a;
    return c;
}
int calculat_average_of_three_intrgers(int a,int b,int c)
{
    int d;
    d=((a+b+c)/3);
    return d;
}
float calculat_circumference_of_a_circle(int a)
{
    float d;
    d=2*3.14*a;
    return d;
}
float calculat_simple_interest(int a,int b,int c)/*a=principal,
b=rate of interest,c=time*/
{
    float d;
    d=(a*b*c)/100.0;
    return d;
}
int calculate_volume_of_a_cuboid(int a,int b,int c)
{
    int d;
    d=a*b*c;
    return d;
}
float calculat_the_profit_or_loss(int a,int b)/*a=cost price,b=selling price*/
{
    float d;
    d=((b*25)/12.0)-((a*25)/12.0);
    return d;
}
void print_ASCII_code_from_a_character(char a)
{
    printf("%d",a);
}
void print_a_character_from_ASCII_code(int a)
{
    printf("%c",a);
}
void print_ASCII_code_from_three_character(char a,char b,char c)
{
    printf("\n%c - %d",a,a);
    printf("\n%c - %d",b,b);
    printf("\n%c - %d",c,c);
}
void print_date(int a,int b,int c)
{
    printf("\"Day-%d , Month-%d , Year-%d\"",a,b,c);
}
void print_time(int a,int b)
{
    printf("\"%d hour and %d Minute",a,b);
}