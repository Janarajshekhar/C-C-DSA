#include<stdio.h>
void main()
{
    int a[5],sum=0,i;
    float avg;
    printf("\n enter 5 number : ");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    sum=sum+a[i];
    avg=sum/5.0;
    printf("\n avg is %f",avg);
}