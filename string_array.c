#include<stdio.h>
int main()
{
    char str[20];
    int i;
    // for(i=0;str[i];i++);
    fgets(str,20,stdin);
    printf("%s",str);
    return 0;
}