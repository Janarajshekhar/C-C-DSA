#include<stdio.h>
int main()
{
  int i,j,n;
  printf("\n enter number of line ::");
  scanf("%d",&n);
  for(i=1 ; i<=n ; i++)
  {
    for(j=1;j<=n;j++)
    if(j<=(n+1)-i)
      printf("* ");
    else
      printf(" ");
  printf("\n");
  }
printf("\n");
return 0;
}