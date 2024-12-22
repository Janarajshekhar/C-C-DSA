#include<stdio.h>
int main()
{
    char str[10]={'B','H','O','P','A','L'};
    int i;
    for(i=0;str[i];i++);
    printf("%d",i);
    return 0;
}