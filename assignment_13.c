#include<stdio.h>
#include<stdlib.h>
void month_number_as_an_input_and_display_number_of_days();
void add_sub_mul_div();
void day_message();
void check_triangle();
void if_else_if_construct_into_switch_case();
void grade_of_student();
void check_factorial_evenodd_areacircle_sum_n_number();
void check_uppercase_lowercase_special_character();
void check_vowel_or_consonant_or_some_special_character();
void LCM_sum_of_digit_volume_of_cuboid_check_prime();
int main()
{
    LCM_sum_of_digit_volume_of_cuboid_check_prime();
    return 0;
}
void month_number_as_an_input_and_display_number_of_days()
{
    int x;
    printf("\n enter month number : ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("this month's days is 31");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("this month's days is 30");
            break;
        case 2:
            printf("this month's days is 28 or 29");
            break;
        default:
            printf("this month is not valid");
            break;
    }
}
void add_sub_mul_div()
{
    int a,b,x;
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n enter your choice : ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("\n enter two number :");
            scanf("%d%d",&a,&b);
            printf("\n %d + %d = %d",a,b,a+b);
            break;
        case 2:
            printf("\n enter two number :");
            scanf("%d%d",&a,&b);
            printf("\n %d - %d = %d",a,b,a-b);
            break;
        case 3:
            printf("\n enter two number :");
            scanf("%d%d",&a,&b);
            printf("\n %d * %d = %d",a,b,a*b);
            break;
        case 4:
            printf("\n enter two number :");
            scanf("%d%d",&a,&b);
            printf("\n %d / %d = %d",a,b,a/b);
            break;
        default:
            printf("\n Invalide choice");
            break;
    }
}
void day_message()
{
    int x;
    printf("\n enter day number (Mon-1) : ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("\n New beginning");
            break;
        case 2:
            printf("\n Jai Bajrangbali");
            break;
        case 3:
            printf("\n Ganesha puja");
            break;
        case 4:
            printf("\n Lakshmi puja");
            break;
        case 5:
            printf("\n Shukra puja");
            break;
        case 6:
            printf("\n shani puja");
            break;
        case 7:
            printf("\n Enjoy Holiday");
            break;
        default:
            printf("\n Invalide day number");
            break;
    }
}
void check_triangle()
{
    int x,a,b,c;
    while(1)
    {
        printf("\n1. Check isosceles triangle");
        printf("\n2. Check right angled triangle");
        printf("\n3. Check equilateral triangle");
        printf("\n4. Exit");
        printf("\n enter your choice : ");
        scanf("%d",&x);
        switch(x)
        {
        case 1:
            printf("\n Enter length of sides of a triangle : ");
            scanf("%d%d%d",&a,&b,&c);
            if(a+b>c&&b+c>a&&a+c>b)
            {
                if(a==b||a==c||b==c)
                    printf("\n It is an isosceles triangle");
                else
                    printf("\n It is not an isosceles triangle");
            }
            else
                printf("\n Not a valid triangle");
            break;
        case 2:
            printf("\n Enter length of sides of a triangle : ");
            scanf("%d%d%d",&a,&b,&c);
            if(a+b>c&&b+c>a&&a+c>b)
            {
                if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
                    printf("\n It is an right angled triangle");
                else
                    printf("\n It is not an right angled triangle");
            }
            else
                printf("\n Not a valid triangle");
            break;
        case 3:
            printf("\n Enter length of sides of a triangle : ");
            scanf("%d%d%d",&a,&b,&c);
            if(a+b>c&&b+c>a&&a+c>b)
            {
                if(a==b&&a==c&&b==c)
                    printf("\n It is an equilateral triangle");
                else
                    printf("\n It is not an equilateral triangle");
            }
            else
                printf("\n Not a valid triangle");
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n Invalid choice retry");
            break;
        }
    }
}
void if_else_if_construct_into_switch_case()
{
    int var;
    printf("\n Enter the value of var : ");
    scanf("%d",&var);
    switch(var)
    {
    case 1:
        printf("\n Good");
        break;
    case 2:
        printf("\n Better");
        break;
    case 3:
        printf("\n Best");
        break;
    default:
        printf("\n Invalid");
        break;
    }
}
void grade_of_student()
{
    int marks;
    printf("\n Enter marks : ");
    scanf("%d",&marks);
    switch(marks)
    {
        case 90 ... 100:
            printf("\n Grade A");
            break;
        case 80 ... 89:
            printf("\n Grade B");
            break;
        case 70 ... 79:
            printf("\n Grade C");
            break;
        case 60 ... 69:
            printf("\n Grade D");
            break;
        case 50 ... 59:
            printf("\n Grade E");
            break;
        case 0 ... 49:
            printf("\n Grade F");
            break;
        default:
            printf("\n Invalid marks");
            break;
    }
}
void check_factorial_evenodd_areacircle_sum_n_number()
{
    int x,a,f=1,i,s=0;
    while(1)
    {
        printf("\n1. Factorial");
        printf("\n2. Even Odd");
        printf("\n3. Area of circle");
        printf("\n4. sum of first N natural number");
        printf("\n5. Exit");
        printf("\n Enter your choice : ");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                printf("\n Enter a number : ");
                scanf("%d",&a);
                for(i=1;i<=a;i++)
                {
                    f=f*i;
                }
                printf("\n Factorial is %d",f);
                break;
            case 2:
                printf("\n Enter a number : ");
                scanf("%d",&a);
                if(a%2==0)
                    printf("\n %d is even number",a);
                else
                    printf("\n %d is odd number",a);
                break;
            case 3:
                printf("\n Enter radius of a circle : ");
                scanf("%d",&a);
                printf("\n Area is %f",(3.14*a*a));
                break;
            case 4:
                printf("\n Enter How digit : ");
                scanf("%d",&a);
                for(i=1;i<=a;i++)
                {
                    s=s+i;
                }
                printf("\n sum of first %d number is %d",a,s);
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("\n Invalid choice retry");
                break;
        }
    }
}
void check_uppercase_lowercase_special_character()
{
    char x;
    printf("\n Enter a character : ");
    scanf("%c",&x);
    switch(x)
    {
        case 'A' ... 'Z':
            printf("\n Uppercase alphabet");
            break;
        case 'a' ... 'z':
            printf("\n Lowercase alphabet");
            break;
        default:
            printf("\n Special character");
            break;
    }
}
void check_vowel_or_consonant_or_some_special_character()
{
     char x;
    printf("\n Enter a character : ");
    scanf("%c",&x);
    switch(x)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U': 
            printf("\n vowel");
            break;
        case 'b' ... 'd': case 'f' ... 'h':
        case 'j' ... 'n': case 'p' ... 't':
        case 'v' ... 'z': case 'B' ... 'D':
        case 'F' ... 'H': case 'J' ... 'N':
        case 'P' ... 'T': case 'V' ... 'Z':
            printf("\n consonant");
            break;
        default:
            printf("\n Special character");
            break;
    }
}
void LCM_sum_of_digit_volume_of_cuboid_check_prime()
{
    int x,a,b,c,L;
    while(1)
    {
        printf("\n1. LCM");
        printf("\n2. Sum of digits");
        printf("\n3. Volume of cuboid");
        printf("\n4. Ckeck prime number");
        printf("\n5. Exit");
        printf("\n Enter your choice : ");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                printf("\n Enter two number : ");
                scanf("%d%d",&a,&b);
                for(L=a>b?a:b;L<=a*b;L++)
                {
                    if(L%a==0&&L%b==0)
                    {
                        printf("\n LCM is %d",L);
                        break;
                    }
                }
                break;
            case 2:
                printf("\n Enter a number : ");
                scanf("%d",&a);
                for(b=0;a;a=a/10)
                {
                    b=b+a%10;
                }
                printf("\n sum is %d",b);
                break;
            case 3:
                printf("\n Enter lengths, Width and Height of cuboid : ");
                scanf("%d%d%d",&a,&b,&c);
                printf("\n Volume is %d",a*b*c);
                break;
            case 4:
                printf("\n Enter a number : ");
                scanf("%d",&a);
                for(b=2;b<a;b++)
                
                    if(a%b==0)
                        break;
                if(a==b)
                    printf("\n %d is prime",a);
                else
                    printf("\n %d is not prime",a);
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("\n Invalid choice retry");
                break;
        }
    }
} 