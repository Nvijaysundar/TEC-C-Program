#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {N
        for(int sp = 1;sp<=n-i;sp++)
            printf(" ");
        for(int k=1;k<=2*i-1;k++)
        {
            if(i==n || k==1 || k == 2*i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
