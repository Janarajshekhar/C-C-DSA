#include<stdio.h>
int main()
{
    int month;
    printf("\n enter month number :");
    scanf("%d",&month);
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("\n 31 Days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("\n 30 Days");
            break;
        case 2:
            printf("\n 28 or 29 Days");
            break;
        default:
            printf("\n Invalide month number");
            break;
    }
    return 0;
}