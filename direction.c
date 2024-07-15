#include<stdio.h>
int main()
{
    int dir, sum =0;
    while(1)
    {
        printf("1:left | -1:right | 0:stop ---:: ");
        scanf("%d",&dir);
        if(dir == 1 || dir == -1)
            sum += dir;
        else if (dir ==0)
            break;
        else
            printf("Invalid Input\n");
    }
    switch(sum%4)
    {
    case 0:
        printf("East");
        break;
    case 1:
    case -3:
        printf("North");
        break;
    case 2:
    case -2:
        printf("West");
        break;
    default:
        printf("South");
    }

}
