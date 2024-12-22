#include<stdio.h>
int main()
{
  int x,a,b;
  printf("\n1: Addition");
  printf("\n2: Subtraction");
  printf("\n3: Multiplication");
  printf("\n4: Division");
  printf("\n Your choice NO :");
  scanf("%d",&x);
  switch (x)
  {
  case 1:
      printf("\n enter two number ::");
      scanf("%d%d",&a,&b);
      printf("\n %d + %d = %d",a,b,a+b);
    break;
  case 2:
      printf("\n enter two number ::");
      scanf("%d%d",&a,&b);
      printf("\n %d - %d = %d",a,b,a-b);
    break;
  case 3:
      printf("\n enter two number ::");
      scanf("%d%d",&a,&b);
      printf("\n %d * %d = %d",a,b,a*b);
      break;
  case 4:
      printf("\n enter two number ::");
      scanf("%d%d",&a,&b);
      printf("\n %d / %d = %d",a,b,a/b);
  default:
      printf("\n your choice is not found");
    break;
  }
  return 0;
}