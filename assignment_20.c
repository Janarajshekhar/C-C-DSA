#include<stdio.h>
void qustion_number_1();
void qustion_number_2();
void qustion_number_3();
int main()
{
    qustion_number_3();
    return 0;
}
void qustion_number_1()
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
void qustion_number_2()
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
void qustion_number_3()
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