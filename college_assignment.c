#include<stdio.h>
#include<math.h>
void perform_all_arithmatic_operator();
void convert_celsius_to_fahrenhite();
void convert_fahrenhite_to_celsius();
void calculate_the_sum_of_1_to_n();
void find_largest_in_two_integer();
void find_lowest_in_two_integer();
void check_a_number_is_even_or_odd();
void find_grade_of_a_student();
void check_a_number_is_divisible_by_7();
void check_a_number_is_perfect_square_or_not();
void find_largest_in_two_integer_using_conditional_operator();
void check_a_number_is_even_or_odd_using_conditional_operator();
void calculate_the_sum_of_first_n_natural_number_using_loop();
void count_the_digites_of_a_integer();
void find_the_reverse_of_a_integer();
void check_a_number_is_palindrom_or_not();
void check_a_number_is_armstrong_or_not();
void check_a_number_is_prime_or_not();
void check_a_number_is_strong_or_not();
void fibonacci_squence_from_0_to_n();
void display_even_fibonacci_squence_from_0_to_n();
void display_odd_fibonacci_squence_from_0_to_n();
void series_1();
void series_2();
void series_3();
void calculate_the_sum_of_n_numbers_using_array();
void find_largest_of_n_numbers_using_array();
void find_smallest_of_n_numbers_using_array();
void display_even_and_odd_number_from_n_number_using_array();
void calculat_the_sum_of_even_and_sum_of_odd_number_from_n_number_using_array();
void display_all_prime_number_from_n_number_using_array();
void display_the_number_which_are_divisible_by_11_from_n_number_using_array();
void display_all_perfect_square_number_from_n_number_using_array();
void write_a_program_to_sort_an_array_of_n_element_in_ascending_order();
void linear_search_using_array();
int main()
{
    perform_all_arithmatic_operator();
    convert_celsius_to_fahrenhite();
    convert_fahrenhite_to_celsius();
    calculate_the_sum_of_1_to_n();
    find_largest_in_two_integer();
    find_lowest_in_two_integer();
    check_a_number_is_even_or_odd();
    find_grade_of_a_student();
    check_a_number_is_divisible_by_7();
    check_a_number_is_perfect_square_or_not();
    find_largest_in_two_integer_using_conditional_operator();
    check_a_number_is_even_or_odd_using_conditional_operator();
    calculate_the_sum_of_first_n_natural_number_using_loop();
    count_the_digites_of_a_integer();
    find_the_reverse_of_a_integer();
    check_a_number_is_palindrom_or_not();
    check_a_number_is_armstrong_or_not();
    check_a_number_is_prime_or_not();
    check_a_number_is_strong_or_not();
    fibonacci_squence_from_0_to_n();
    display_even_fibonacci_squence_from_0_to_n();
    display_odd_fibonacci_squence_from_0_to_n();
    series_1();
    series_2();
    series_3();
    calculate_the_sum_of_n_numbers_using_array();
    find_largest_of_n_numbers_using_array();
    find_smallest_of_n_numbers_using_array();
    display_even_and_odd_number_from_n_number_using_array();
    calculat_the_sum_of_even_and_sum_of_odd_number_from_n_number_using_array();
    display_all_prime_number_from_n_number_using_array();
    display_the_number_which_are_divisible_by_11_from_n_number_using_array();
    display_all_perfect_square_number_from_n_number_using_array();
    write_a_program_to_sort_an_array_of_n_element_in_ascending_order();
    linear_search_using_array();
    return 0;
}
void perform_all_arithmatic_operator()
{
    int a,b;
    printf("\n Enter first number : ");
    scanf("%d",&a);
    printf("\n Enter second number : ");
    scanf("%d",&b);
    printf("\n sum of %d and %d is %d",a,b,a+b);
    printf("\n subtraction of %d and %d is %d",a,b,a-b);
    printf("\n multiplication of %d and %d is %d",a,b,a*b);
    printf("\n division of %d and %d is %d",a,b,a/b);
    printf("\n remainder of %d and %d is %d",a,b,a%b);
}
void convert_celsius_to_fahrenhite()
{
    float c,f;
    printf("\n");
    printf("\n Enter celsius temperature : ");
    scanf("%f",&c);
    f=((c*9)/5)+32;
    printf("\n fahrenhite temperature : %f",f);
}
void convert_fahrenhite_to_celsius()
{
    float c,f;
    printf("\n");
    printf("\n Enter fahrenhite temperature : ");
    scanf("%f",&f);
    c=((f-32)/9)*5;
    printf("\n celsius temperature : %f",c);
}
void calculate_the_sum_of_1_to_n()
{
    int n,s;
    printf("\n");
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    s=n*(n+1)/2;
    printf("\n sum of 1 to %d is %d",n,s);
}
void find_largest_in_two_integer()
{
    int a,b;
    printf("\n");
    printf("\n Enter first number : ");
    scanf("%d",&a);
    printf("\n Enter second number : ");
    scanf("%d",&b);
    if(a>b)
    printf("\n %d is largest number",a);
    else if(a<b)
    printf("\n %d is largest number",b);
    else
    printf("\n %d and %d is same number",a,b);
}
void find_lowest_in_two_integer()
{
    int a,b;
    printf("\n");
    printf("\n Enter first number : ");
    scanf("%d",&a);
    printf("\n Enter second number : ");
    scanf("%d",&b);
    if(a<b)
    printf("\n %d is lowest number",a);
    else if(a>b)
    printf("\n %d is lowest number",b);
    else
    printf("\n %d and %d is same number",a,b);
}
void check_a_number_is_even_or_odd()
{
    int a;
    printf("\n");
    printf("\n Enter a number : ");
    scanf("%d",&a);
    if(a%2==0)
    printf("\n %d is even number",a);
    else
    printf("\n %d is odd number",a);
}
void find_grade_of_a_student()
{
    int a;
    printf("\n");
    printf("\n Enter the marks under 0 to 100 : ");
    scanf("%d",&a);
    if(a<0 || a>100)
    printf("\n this marks is wrong");
    else if(a<=100 && a>=90)
    printf("\n your grade is A+");
    else if(a<=89 && a>=80)
    printf("\n your grade is A");
    else if(a<=79 && a>=70)
    printf("\n your grade is B+");
    else if(a<=69 && a>=60)
    printf("\n your grade is B");
    else if(a<=59 && a>=50)
    printf("\n your grade is C");
    else if(a<=49 && a>=40)
    printf("\n your grade is D");
    else
    printf("\n your grade is F");
}
void check_a_number_is_divisible_by_7()
{
    int a;
    printf("\n");
    printf("\n Enter a number : ");
    scanf("%d",&a);
    if(a%7==0)
    printf("\n %d is divisible by 7",a);
    else
    printf("\n %d is not divisible by 7",a);
}
void check_a_number_is_perfect_square_or_not()
{
    int a,b;
    printf("\n");
    printf("\n Enter a number : ");
    scanf("%d",&a);
    b=sqrt(a);
    if((b*b)==a)
    printf("\n %d is perfect square",a);
    else
    printf("\n %d is not perfect square",a);
}
void find_largest_in_two_integer_using_conditional_operator()
{
    int a,b;
    printf("\n");
    printf("\n Enter first number : ");
    scanf("%d",&a);
    printf("\n Enter second number : ");
    scanf("%d",&b);
    a>b?printf("\n %d is largest number",a):printf("\n %d is largest number",b);
}
void check_a_number_is_even_or_odd_using_conditional_operator()
{
    int a;
    printf("\n");
    printf("\n Enter a number : ");
    scanf("%d",&a);
    (a%2==0)?printf("\n %d is even number",a):printf("\n %d is odd number",a);
}
void calculate_the_sum_of_first_n_natural_number_using_loop()
{
    int n,i,s=0;
    printf("\n");
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s+i;
    printf("\n sum of first %d natural number is %d",n,s);
}
void count_the_digites_of_a_integer()
{
    int a,i,b;
    printf("\n");
    printf("\n Enter a number : ");
    scanf("%d",&a);
    b=a;
    for(i=0;a!=0;i++)
    {
    a=a/10;
    }
    printf("\n digites of the %d number is %d",b,i);
}
void find_the_reverse_of_a_integer()
{
    int a,s=0,r;
    printf("\n");
    printf("\n Enter a number : ");
    scanf("%d",&a);
    for(;a!=0;a=a/10)
    {
    r=a%10;
    s=10*s+r;
    }
    printf("%d",s);
}
void check_a_number_is_palindrom_or_not()
{
    int a,b,s=0,r;
    printf("\n");
    printf("\n Enter a number : ");
    scanf("%d",&a);
    b=a;
    for(;a!=0;a=a/10)
    {
    r=a%10;
    s=10*s+r;
    }
    if(b==s)
    printf("\n %d is palindrom number",b);
    else
    printf("\n %d is not palindrom number",b);
}
void check_a_number_is_armstrong_or_not()
{
    int a,y,n=0,i,sum=0,d,p;
    printf("\n");
    printf("\n Enter a number : ");
    scanf("%d",&a);
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
void check_a_number_is_prime_or_not()
{
    int a,n,i;
    printf("\n");
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
    printf("\n");
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
void display_even_fibonacci_squence_from_0_to_n()
{
    int a=0,b=1,c=0,n;
    printf("\n");
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    printf("%d",a);
    printf("\t %d",b);
    c=a+b;
    while(c<=n)
    {
        if(c%2==0)
        {
            printf("\t %d",c);
        }
        a=b;
        b=c;
        c=a+b; 
    }
}
void display_odd_fibonacci_squence_from_0_to_n()
{
    int a=0,b=1,c=0,n;
    printf("\n");
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    printf("%d",a);
    printf("\t %d",b);
    c=a+b;
    while(c<=n)
    {
        if(c%2!=0)
        {
            printf("\t %d",c);
        }
        a=b;
        b=c;
        c=a+b; 
    }
}
void series_1()
{
    int x,n,i,s=1;
    printf("\n");
    printf("\n Enter the value of x : ");
    scanf("%d",&x);
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+pow(x,i);
    }
    printf("\n 1 + x + x^2 + x^3 + ... + x^n = %d",s);
}
void series_2()
{
    int x,n,i,s=1;
    printf("\n");
    printf("\n Enter the value of x : ");
    scanf("%d",&x);
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+1/pow(x,i);
    }
    printf("\n 1 + 1/x + 1/x^2 + 1/x^3 + ... + 1/x^n = %d",s);
}
void series_3()
{
    int x,n,i,j,f;
    float s=1;
    printf("\n");
    printf("\n Enter the value of x : ");
    scanf("%d",&x);
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        f=1;
        for(i=1;i<=j;i++)
        {
            f=f*i;
        }
        s=s+(float)(pow(x,j)/f);
    }
    printf("\n 1 + x + x^2/2! + x^3/3! + ... + x^n/n! = %f",s);
}
void calculate_the_sum_of_n_numbers_using_array()
{
    int a[100],i,n,s=0;
    printf("\n");
    printf("\n Enter how many number are added : ");
    scanf("%d",&n);
    printf("\n Enter %d number : ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("\n sum = %d",s);
}
void find_largest_of_n_numbers_using_array()
{
    int a[100],i,n,largest;
    printf("\n");
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter %d number : ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    largest = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }    
    }
    printf("\n %d is largest number",largest);;
}
void find_smallest_of_n_numbers_using_array()
{
    int a[100],i,n,smallest;
    printf("\n");
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter %d number : ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    smallest = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }    
    }
    printf("\n %d is smallest number",smallest);;
}
void display_even_and_odd_number_from_n_number_using_array()
{
    int a[100],i,n;
    printf("\n");
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter %d number : ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n even number is : ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d  ",a[i]);
        }
    }
    printf("\n odd number is : ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d  ",a[i]);
        }
    }
}
void calculat_the_sum_of_even_and_sum_of_odd_number_from_n_number_using_array()
{
    int a[100],i,n,s;
    printf("\n");
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter %d number : ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    s=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s=s+a[i];
        }
    }
    printf("\n sum of even numbers = %d",s);
    s=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            s=s+a[i];
        }
    }
    printf("\n sum of odd numbers = %d",s);
}
void display_all_prime_number_from_n_number_using_array()
{
    int a[100],i,j,n,x;
    printf("\n");
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter %d number : ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n prime number is : ");
    for(i=0;i<n;i++)
    {
        x=1;
        for(j=2;j<=a[i]/2;j++)
        {
            x=a[i]%j;
            if(x==0)
            break;
        }
        if(x!=0)
        printf("%d   ",a[i]);
    }
}
void display_the_number_which_are_divisible_by_11_from_n_number_using_array()
{
    int a[100],i,n;
    printf("\n");
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter %d number : ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n divisible by 11 number is : ");
    for(i=0;i<n;i++)
    {
        if(a[i]%11==0)
        printf("%d  ",a[i]);
    }
}
void display_all_perfect_square_number_from_n_number_using_array()
{
    int a[100],b,i,n;
    printf("\n");
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter %d number : ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n perfect square number is : ");
    for(i=0;i<n;i++)
    {
        b=sqrt(a[i]);
        if((b*b)==a[i])
        printf("%d  ",a[i]);
    }
}
void write_a_program_to_sort_an_array_of_n_element_in_ascending_order()
{
    int a[100],i,j,n,t;
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter %d number : ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\n sorted array is : ");
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);
}
void linear_search_using_array()
{
    int a[100],i,n,index,item;
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter array element : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n Enter the element to be searched : ");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            index=i;
            break;
        }
    }
    if(index>0 && index<=i)
    printf("\n search is successful and %d is in the index %d",item,index);
    else
    printf("\n search is unsuccessful");
}