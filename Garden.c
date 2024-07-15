#include<stdio.h>
int main()
{
    int row,col,tree;
    scanf("%d%d%d",&row,&col,&tree);
    if((tree>=1 && tree<=col) || tree%col ==0 ||tree%c==1)
        printf("Mango tree");
    else
        printf("Not a mango tree");
}
