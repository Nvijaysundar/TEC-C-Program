#include<stdio.h>
#include<math.h>
int main()
{

    int n;
    printf("Enter No of chalks:: ");
    scanf("%d",&n);
    int days = n + (int)sqrt(n) + 1;
    printf("Days : %d",days);
}
