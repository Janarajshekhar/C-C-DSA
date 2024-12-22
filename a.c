#include<stdio.h>
#include<ctype.h>
int main()
{
  int a,b,c;
  printf("\n enter the value of a ::");
  scanf("%d",&a);
  printf("\n enter the value of b ::");
  scanf("%d",&b);
  printf("\n enter the value of c ::");
  scanf("%d",&c);
  printf("\n quadratic equation is :: \"%dx^2+%dx+%d=0\"",a,b,c);
  if(((b*b)-(4*a*c)>0))
  printf("\n value of 'x' is real & distinct");
  else if(((b*b)-(4*a*c)<0))
  printf("\n value of 'x' is imaginary root");
  else 
  printf("\n value of 'x' is real & equal");
  return 0;
}