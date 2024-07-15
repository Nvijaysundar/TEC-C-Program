#include<stdio.h>
int main()
{
    int b_cap,n_a,n_c;
    scanf("%d%d%d",&b_cap,&n_a,&n_c);

    if((n_a*75 + n_c*30)<=b_cap)
    {
        printf("baot is stable");
    }
    else
        printf("Boat will Drown");
}
