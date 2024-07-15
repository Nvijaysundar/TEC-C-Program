//input : 12
//         1 2 3 4 5 6 7 8 9 10 11 12
//output : * - ^ - * & * - ^ -  *  &
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
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
}

