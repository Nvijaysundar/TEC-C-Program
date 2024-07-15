#include<stdio.h>
#include<math.h>
int main()
{
    int r,t,n;
    scanf("%d%d%d",&r,&t,&n);
    float circum = 2  * M_PI * r;
    printf("Distance : %.2f",circum * n);
}
