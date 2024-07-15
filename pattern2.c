#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int j =1;j<=n;j++)
        if(j%2==0)
            printf("# ");
        else
            printf("& ");
}
