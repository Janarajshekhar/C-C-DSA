/*LINEAR SEARCH*/
#include<stdio.h>
int main()
{
    int a[20],i,n,beg,mid,end,key;
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter array element : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n Enter the element to be searched : ");
    scanf("%d",&key);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end && a[mid]!=key)
    {
        if(key>a[mid])
        beg=mid+1;
        else
        end=mid-1;
        mid=(beg+end)/2;
    }
    if(a[mid]==key)
    printf("\n search is successful and %d is in the index %d",key,mid);
    else
    printf("\n search is unsuccessful");
    return 0;
}