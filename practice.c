#include<stdio.h>
void calculat_the_sum_of_first_n_natural_number_using_loop();
void count_the_digites_of_a_integer();
void find_the_revers_of_a_integer();
int main()
{
    // calculat_the_sum_of_first_n_natural_number_using_loop();
    // count_the_digites_of_a_integer();
    find_the_revers_of_a_integer();
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