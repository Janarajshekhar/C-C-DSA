#include<stdio.h>
void input(int **q,int n,int size[]);
void display(int *p,int size);
int main()
{
    int a[5],b[6],c[3],d[8];
    int *p[4],i;
    int size[]={5,6,3,8};
    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
    input(p,4,size);
    for(i=0;i<4;i++)
    display(p[i],size[i]);
    return 0;
}
void input(int **q,int n,int size[])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("\n enter %d number",size[i]);
        for(j=0;j<size[i];j++)
        scanf("%d",*(q+i)+j);
    }
}
void display(int *p,int size)
{
    int i;
    for(i=0;i<size;i++)
    printf("%d ",*(p+i));
    printf("\n");
}