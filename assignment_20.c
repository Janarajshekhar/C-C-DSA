#include<stdio.h>
void calculate_the_sum_of_two_3_3_matrices();
void calculate_the_product_of_two_3_3_matrices();
void print_the_transpose_of_a_given_matrix();
int main()
{
    print_the_transpose_of_a_given_matrix();
    return 0;
}
void calculate_the_sum_of_two_3_3_matrices()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("\n Enter 9 number of first Matrix : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    printf("\n Enter 9 number of second Matrix : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            c[i][j]=a[i][j]+b[i][j];

    printf("\n sum of matrices is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)  
            printf("%d  ",c[i][j]);
            printf("\n");
    }
}
void calculate_the_product_of_two_3_3_matrices()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
    printf("\n Enter 9 number of first Matrix : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    printf("\n Enter 9 number of second Matrix : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            for(k=0,sum=0;k<3;k++)
                sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
        }
    
    printf("\n product of two matrices is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d  ",c[i][j]);
            printf("\n");        
    }    
}
void print_the_transpose_of_a_given_matrix()
{
    int a[3][3],i,j,k,temp;
    printf("\n Enter 9 number of a Matrix : ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    // for(i=0,i=1,k=1;k<=3;k++)
    for(i=0;i<3;i++)
        for(j=i+1;j<3;j++)
    {
        temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
        // if(j-i==1)
        //     j++;
        // else
        //     i++;
    }

    printf("\n transpose of matrices is : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d  ",a[i][j]);
            printf("\n");        
    }
} 