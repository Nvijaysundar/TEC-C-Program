/*
input : 12
output :
* - ^ - * & * - ^ - * &
* - ^ - * & * - ^ - * &
* - ^ - * & * - ^ - * &
* - ^ - * & * - ^ - * &
* - ^ - * & * - ^ - * &
* - ^ - * & * - ^ - * &
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        for(int j =1;j<=n;j++)
        {
            if(j%6==0)
                printf("& ");
            else if(j%3==0)
                printf("^ ");
            else if(j%2==0)
                printf("- ");
            else
                printf("* ");
        }
        printf("\n");
    }
}
