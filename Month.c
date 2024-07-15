#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

        switch(num)
        {
        case 1:
            printf("Jan");
            break;
        case 2:
            printf("Feb");
            break;
        case 3:
            printf("Mar");
            break;
        case 4:
            printf("Apr");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("JUN");
            break;
        default:
            printf("Invalid Input");
        }
}
