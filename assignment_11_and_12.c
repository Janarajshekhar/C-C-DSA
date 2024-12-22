#include<stdio.h>
void function_1(int a);
void function_2(int a);
void function_3(int a);
void function_4(int a);
void function_5(int a);
void function_6(int a);
void function_7(int a);
void function_8(int a);
void function_9(int a);
void function_10(int a);
void function_11(int a);
void function_12(int a);
void function_13(int a);
void function_14(int a);
void function_15(int a);
void function_16(int a);
void function_17(int a);
void function_18(int a);
void function_19(int a);
void function_20(int a);
int main()
{
    int a;
    printf("\n enter number of line :");
    scanf("%d",&a);
    function_20(a);
    return 0;
}
void function_1(int a)
{
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        if(j<=i)
        printf(" * ");
        else
        printf("   ");
        printf("\n");
    }
}
void function_2(int a)
{
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        if(j>=(a+1)-i)
        printf(" * ");
        else
        printf("   ");
        printf("\n");
    }
}
void function_3(int a)
{
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        if(j<=(a+1)-i)
        printf(" * ");
        else
        printf("   ");
        printf("\n");
    }
}
void function_4(int a)
{
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        if(j>=i)
        printf(" * ");
        else
        printf("   ");
        printf("\n");
    }
}
void function_5(int a)
{
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        if(j<=i)
        printf(" %d ",j);
        else
        printf("   ");
        printf("\n");
    }
}
void function_6(int a)
{
    int i,j,k;
    for(i=1;i<=a;i++)
    {
        k=i;
        for(j=1;j<=a;j++)
        if(j<=i)
        {
            printf(" %d ",k);
            k--;
        }
        else
        printf("   ");
        printf("\n");
    }
}
void function_7(int a)
{
    int i,j;
    char k;
    for(i=1;i<=a;i++)
    {
        k='A';
        for(j=1;j<=a;j++)
        if(j>=i)
        {
        printf(" %c ",k);
        k++;
        }
        else
        printf("   ");
        printf("\n");
    }
}
void function_8(int a)
{
    int i,j,k=1;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        if(j<=i)
        {
            printf(" %d ",k);
            k++;
        }
        else
        printf("   ");
        printf("\n");
    }
}
void function_9(int a)
{
    int i,j;
    char k;
    for(i=1;i<=a;i++)
    {
        k=64;
        for(j=1;j<=a;j++)
        if(j>=i)
        printf(" %c ",k+j);
        else
        printf("   ");
        printf("\n");
    }
}
void function_10(int a)
{
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        if(i==1||i==a||j==1||j==a)
        printf(" * ");
        else
        printf("   ");
        printf("\n");
    }
}
void function_11(int a)
{
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=((a*2)-1);j++)
        {
            if(j>=(a+1)-i&&j<=(a-1)+i)
            printf(" * ");
            else
            printf("   ");
        }
        printf("\n");
    }
}
void function_12(int a)
{
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=((a*2)-1);j++)
        {
            if(j>=i&&j<=(a*2)-i)
            printf(" * ");
            else
            printf("   ");
        }
        printf("\n");
    }
}
void function_13(int a)
{
    int i,j,k;
    for(i=1;i<=a;i++)
    {
        k=1;
        for(j=1;j<=((a*2)-1);j++)
        {
            if(j>=(a+1)-i&&j<=(a-1)+i)
            {
                if(k)
                    printf(" * ");
                else
                    printf("   ");
                k=1-k;
            }
            else
            printf("   ");
        }
        printf("\n");
    }
}
void function_14(int a)
{
    int i,j,k;
    for(i=1;i<=a;i++)
    {
        k=1;
        for(j=1;j<=((a*2)-1);j++)
        {
            if(j>=(a+1)-i&&j<=(a-1)+i){
            printf(" %d ",k);
            j<a?k++:k--;
            }
            else
            printf("   ");
        }
        printf("\n");
    }
}
void function_15(int a)
{
    int i,j;
    char k;
    for(i=1;i<=a;i++)
    {
        k='A';
        for(j=1;j<=((a*2)-1);j++)
        {
            if(j>=i&&j<=(a*2)-i){
            printf(" %c ",k);
            k++;
            }
            else
            printf("   ");
        }
        printf("\n");
    }
}
void function_16(int a)
{
    int i,j;
    char k;
    for(i=1;i<=a;i++)
    {
        k='A';
        for(j=1;j<=((a*2)-1);j++)
        {
            if(j>=i&&j<=(a*2)-i){
            printf(" %c ",k);
            j<a?k++:k--;
            }
            else
            printf("   ");
        }
        printf("\n");
    }
}
void function_17(int a)
{
    int i,j,k,p;
    for(i=1;i<=a;i++)
    {
        k=1;
        p=1;
        for(j=1;j<=((a*2)-1);j++)
        {
            if(j>=(a+1)-i&&j<=(a-1)+i)
            {
                if(k){
                    printf(" %d ",p);
                    j<a?p++:p--;
                }
                else{
                    printf("   ");
                    if(j==a)
                    p--;
                }
                k=1-k;
            }
            else
            printf("   ");
        }
        printf("\n");
    }
}
void function_18(int a)
{
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=((a*2)-1);j++)
        {
            if(j<=((a+1)-i)||j>=((a-1)+i))
            printf(" * ");
            else
            printf("   ");
        }
        printf("\n");
    }
}
void function_19(int a)
{
    int i,j,k;
    for(i=1;i<=a;i++)
    {
        k=1;
        for(j=1;j<=((a*2)-1);j++)
        {
            if(j<=((a+1)-i)||j>=((a-1)+i)){
            printf(" %d ",k);
            j<a?k++:k--;
            }
            else{
            printf("   ");
            if(j==a)
            k--;
            }
        }
        printf("\n");
    }
}
void function_20(int a)
{
    int i,j,k;
    for(i=1;i<=a;i++)
    {
        k='A';
        for(j=1;j<=((a*2)-1);j++)
        {
            if(j<=((a+1)-i)||j>=((a-1)+i)){
            printf(" %c ",k);
            j<a?k++:k--;
            }
            else{
            printf("   ");
            if(j==a)
            k--;
            }
        }
        printf("\n");
    }
}