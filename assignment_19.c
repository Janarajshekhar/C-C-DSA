#include<stdio.h>
int find_the_greatest_number_given_array(int a[],int n);
int find_the_smallest_number_given_array(int a[],int n);
int sort_an_array_of_any_size(int a[],int n);
void rotate(int a[],int size,int n,int d);
void adjacent_duplicate();
void swap_two_elements_of_given_array_with_specifide_indices();
void count_a_total_number_of_duplicate_elements_in_array();
int main()
{
//    int  a[100],n,i,size,d;
//    printf("\n enter the number of element in the array :");
//    scanf("%d",&size);
//    printf("\n enter the element of the array :");
//    for(i=0;i<size;i++)
//    scanf("%d",&a[i]);
//    printf("\n enter the direction(left: -1 and right: +1) : ");
//    scanf("%d",&d);
//    printf("\n enter which position rotate an array : ");
//    scanf("%d",&n);
//    printf("\n sort element is : ");
count_a_total_number_of_duplicate_elements_in_array();
//    for(i=0;i<n;i++)
//    printf("%d ",k);
   return 0;
}
int find_the_greatest_number_given_array(int a[],int n)
{
    int i,max;
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return max;
}
int find_the_smallest_number_given_array(int a[],int n)
{
    int i,min;
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    return min;
}
int sort_an_array_of_any_size(int a[],int n)
{
    int i,r,t;
    for(r=1;r<n;r++)
        for(i=0;i<n-r;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    return n;
}
void rotate(int a[],int size,int n,int d)
{
    int i,temp;
    if(d==1)
    {
        for(i=0;i<n;i++)
        {
            temp=a[size-1];
            for(i=size-n;i>=0;i--)
            a[i+1]=a[i];
            a[0]=temp;
        }
        for(i=0;i<size;i++)
        printf("\n %d",a[i]);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            temp=a[0];
            for(i=1;i<=size-1;i++)
            a[i-1]=a[i];
            a[size-1]=temp;
        }
        for(i=0;i<size;i++)
        printf("\n %d",a[i]);
    }
}
void adjacent_duplicate()
{
    int a[100],size,i,count=0;
    printf("\n Enter how many number : ");
    scanf("%d",&size);
    printf("\n Enter %d number : ",size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=size-2;i++)
    {
        if(a[i]==a[i+1]){
        printf("Duplicates values: %d ",a[i]);
        count=1;
        }
    }
    if(count==0){
        printf("\n No Duplicates");
    }
}
void swap_two_elements_of_given_array_with_specifide_indices()
{
    int a[100],size,i,indices_1,indices_2,t;
    printf("\n Enter how many number : ");
    scanf("%d",&size);
    printf("\n Enter %d number : ",size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("\n Enter which two indices elements are swap : ");
    scanf("%d%d",&indices_1,&indices_2);
    t=a[indices_1];
    a[indices_1]=a[indices_2];
    a[indices_2]=t;
    for(i=0;i<size;i++)
    printf("\n %d",a[i]);
}
void count_a_total_number_of_duplicate_elements_in_array()
{
    int a[100],size,i,j,count=0,t;
    printf("\n Enter how many number : ");
    scanf("%d",&size);
    printf("\n Enter %d number : ",size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    i=0;
    j=1;
    while(i<=size-2)
    {
        if(a[i]==a[j])
            count++;
        while(a[i]==a[j])
            j++;
        i=j;
        j=j+1;
    }
    printf("\n total number of duplicate elements is %d",count);
}