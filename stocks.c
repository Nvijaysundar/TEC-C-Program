#include<stdio.h>
int main(){
    int no_of_stocks;
    scanf("%d",&no_of_stocks);
    int stocks[no_of_stocks],sold[no_of_stocks];
    printf("Enter Stocks:: ");
    for(int i=0;i<no_of_stocks;i++)
        scanf("%d",stocks+i);
    printf("Enter Sold Products:: ");
    for(int i=0;i<no_of_stocks;i++)
        scanf("%d",&sold[i]);
    printf("Final Products:: \n");
    for(int i=0;i<no_of_stocks;i++)
    {
        printf("%d ",*(stocks+i)-*(sold+i));
    }
}
