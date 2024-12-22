#include<stdio.h>
int main()
{
    int a[100],n,i,j,t;
    printf(" How many number is enter : ");
    scanf("%d",&n);
    printf("\n Enter %d number : ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\n Bubble sort is : ");
    for(j=0;j<n;j++){
    printf(" %d   ",a[j]);
    }
}