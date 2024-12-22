#include<stdio.h>
void sum_of_number_stored_in_an_array_of_size_10(int a[]);
void average_of_number_stored_in_an_array_of_size_10(int a[]);
void sum_of_all_even_numbers_and_all_odd_number_size_of_array_10(int a[]);
void find_greatest_number_in_an_array_size_10(int a[]);
void find_smallest_number_in_an_array_size_10(int a[]);
void sort_elements_of_an_array_of_size_10(int a[]);
void find_second_largest_in_an_array_of_size_10(int a[]);
void find_second_smallest_in_an_array_of_size_10(int a[]);
void sort_an_array_of_10_elements_in_descending_order(int a[]);
void copy_the_element_of_one_array_in_to_another_array(int a[]);
int main()
{
    int a[10],i;
    printf("\n enter 10 numbers :");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
        copy_the_element_of_one_array_in_to_another_array(a);
    return 0;
}
void sum_of_number_stored_in_an_array_of_size_10(int a[])
{
    int i,sum=0;
    for(i=0;i<10;i++)
    {
    sum=sum+a[i];
    }
    printf("\n sum = %d",sum);
}
void average_of_number_stored_in_an_array_of_size_10(int a[])
{
    int i,sum=0;
    float avg;
    for(i=0;i<10;i++)
    sum=sum+a[i];
    avg=(sum/10.0);
    printf("\n average = %f",avg);
}
void sum_of_all_even_numbers_and_all_odd_number_size_of_array_10(int a[])
{
    int i,sum_even=0,sum_odd=0;
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            sum_even=sum_even+a[i];
        else
            sum_odd=sum_odd+a[i];
    }
    printf("\n sum of all even number is %d",sum_even);
    printf("\n sum of all odd number is %d",sum_odd);
}
void find_greatest_number_in_an_array_size_10(int a[])
{
    int max,i;
    max=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>max)
            max=a[i]; 
    }
    printf("\n greatest number is %d",max);
} 
void find_smallest_number_in_an_array_size_10(int a[])
{
    int i,small=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]<small)
            small=a[i]; 
    }
    printf("\n smallest number is %d",small);
}
void sort_elements_of_an_array_of_size_10(int a[])
{
    int i,r,t;
    for(r=1;r<10;r++)
        for(i=0;i<10-r;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    printf("\n sort element is : ");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
}
void find_second_largest_in_an_array_of_size_10(int a[])
{
    int i,max,second_max;
    if(a[0]>a[1])
    {
        max=a[0];
        second_max=a[1];
    }
    else
    {
        max=a[1];
        second_max=a[0];
    }
    for(i=2;i<10;i++)
    {
        if(a[i]>max)
        {
            second_max=max;
            max=a[i];
        }
        else
        {
            if(a[i]>second_max)
                second_max=a[i];
        }
    }
    printf("\n second largest number is %d",second_max);
}
void find_second_smallest_in_an_array_of_size_10(int a[])
{
    int i,min,second_min;
    if(a[0]>a[1])
    {
        min=a[1];
        second_min=a[0];
    }
    else
    {
        min=a[0];
        second_min=a[1];
    }
    for(i=2;i<10;i++)
    {
        if(a[i]<min)
        {
            second_min=min;
            min=a[i];
        }
        else
        {
            if(a[i]<second_min)
                second_min=a[i];
        }
    }
    printf("\n second smallest number is %d",second_min);   
}
void sort_an_array_of_10_elements_in_descending_order(int a[])
{
    int i,r,t;
    for(r=1;r<10;r++)
        for(i=0;i<10-r;i++)
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    printf("\n sort element is : ");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
}
void copy_the_element_of_one_array_in_to_another_array(int a[])
{
    int i,b[10];
    for(i=0;i<10;i++)
        b[i]=a[i];
    for(i=0;i<10;i++)
        printf("%d ",b[i]);
} 