#include<stdio.h>
int main()
{
    int num,r ,flag7 = 0,flag9=0;
    scanf("%d",&num);

    while(num>0){
        r = num %10;
        if(r ==7)
            flag7 = 1;
        else if(r==9)
            flag9 = 1;
        num /= 10;
    }

    if(flag7 ==1 && flag9 == 1)
        printf("Super Boom");
    else if(flag7 ==1 || flag9 == 1)
        printf("Boom");
    else
        printf("No boom");
}
